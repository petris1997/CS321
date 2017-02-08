#include <jni.h>
#include <string>

extern "C"
jstring
Java_group2_cs321_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
