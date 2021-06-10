//
// Created by ksnowlv on 2019-04-25.
//

#ifndef KOTLINJNI_JNIPERSON_H
#define KOTLINJNI_JNIPERSON_H

#include <jni.h>

  /*
   * Class:     com_ksnowlv_hellojniforjava_JavaCallJNI
   * Method:    createPerson
   * Signature: ()Ljava/lang/Object;
   */
JNIEXPORT jlong JNICALL Java_com_ksnowlv_kotlinjni_KotlinPerson_createPerson
    (JNIEnv *env, jobject cls);
  /*
   * Class:     com_ksnowlv_hellojniforjava_JavaCallJNI
   * Method:    destroyPerson
   * Signature: (Ljava/lang/Object;)V
   */
  JNIEXPORT void JNICALL Java_com_ksnowlv_jniperson_KotlinPerson_destroyPerson
    (JNIEnv *env, jobject cls, jlong o);

  /*
   * Class:     com_ksnowlv_hellojniforjava_JavaCallJNI
   * Method:    setPersonAge
   * Signature: (Ljava/lang/Object;I)V
   */
  JNIEXPORT void JNICALL Java_com_ksnowlv_jniperson_KotlinPerson_setAge
    (JNIEnv *env, jobject cls, jlong o, jint value);

  /*
   * Class:     com_ksnowlv_hellojniforjava_JavaCallJNI
   * Method:    personAge
   * Signature: (Ljava/lang/Object;)I
   */
  JNIEXPORT jint JNICALL Java_com_ksnowlv_jniperson_KotlinPerson_age
    (JNIEnv *env, jobject cls, jlong o);


  JNIEXPORT void JNICALL Java_com_ksnowlv_jniperson_KotlinPerson_setName
    (JNIEnv *env, jobject cls, jlong o, jstring string);

  /*
   * Class:     com_ksnowlv_hellojniforjava_JavaCallJNI
   * Method:    personName
   * Signature: (Ljava/lang/Object;)Ljava/lang/String;
   */
  JNIEXPORT jstring JNICALL Java_com_ksnowlv_jniperson_KotlinPerson_name
    (JNIEnv *env, jobject cls, jlong o);

#endif //KOTLINJNI_JNIPERSON_H
