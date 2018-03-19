#include <jni.h>
#include <string>
#include <iostream>
#include "Mydata.h"
using namespace std;

extern "C"
JNIEXPORT jstring JNICALL Java_com_go_ndk_demoproject_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


extern "C"
JNIEXPORT jint JNICALL
Java_com_go_ndk_demoproject_MainActivity_intFromJNI(JNIEnv *env, jobject instance, jint number) {


   // int cnumber = (*env) ->
    // TODO

}extern "C"
JNIEXPORT jint JNICALL
Java_com_go_ndk_demoproject_MainActivity_getShapAre(JNIEnv *env, jobject instance, jint a, jint b) {

    // TODO
    Mydata *shap;

    bool is_ure =  shap ->MobaiXiao();

    Shape *shape  = new Shape(a, b);

     int are = shape ->area();

     //delete shap;



   cout << "Hello World" + is_ure; // 输出 Hello World

    if(is_ure){
        return are;
    } else {
        return 5;
    }


}extern "C"
JNIEXPORT jobject JNICALL
Java_com_go_ndk_demoproject_MainActivity_getImage(JNIEnv *env, jobject instance) {

    // TODO

}extern "C"
JNIEXPORT jint JNICALL
Java_com_go_ndk_demoproject_MainActivity_getRetange(JNIEnv *env, jobject instance, jint a, jint b) {

    // TODO

  //  Rectangle *r  = new Rectangle(a, b);
    Rectangle r ;
    r.height = a;
    r.width = b;

    int rectangle = r.area();
   // delete  r;
    return rectangle;


}