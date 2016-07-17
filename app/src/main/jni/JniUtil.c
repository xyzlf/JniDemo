//
// Created by zhanglifeng on 2016/7/17.
//

#include "com_xyzlf_jni_demo_JniUtil.h"
/*
* Class:     com_xyzlf_jni_demo_JniUtil
* Method:    getStringFromJni
* Signature: ()Ljava/lang/String;
*/
JNIEXPORT jstring JNICALL Java_com_xyzlf_jni_demo_JniUtil_getStringFromJni
        (JNIEnv *env, jobject obj) {
   return (*env)->NewStringUTF(env, "这里是来自c的string");
}