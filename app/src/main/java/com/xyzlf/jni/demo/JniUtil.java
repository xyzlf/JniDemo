package com.xyzlf.jni.demo;

/**
 * Created by zhanglifeng on 2016/7/17
 */

public class JniUtil {

    static {
        System.loadLibrary("NdkJniDemo");//之前在build.gradle里面设置的so名字，必须一致
    }

    public static native String getStringFromJni();

}
