/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_michaeldenk_yasdi4j_YasdiMaster */

#ifndef _Included_de_michaeldenk_yasdi4j_YasdiMaster
#define _Included_de_michaeldenk_yasdi4j_YasdiMaster
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_initialize
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1initialize
  (JNIEnv *, jobject, jstring);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1shutdown
  (JNIEnv *, jobject);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_reset
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1reset
  (JNIEnv *, jobject);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_setDriverOnline
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1setDriverOnline
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_setDriverOffline
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1setDriverOffline
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_detectDevices
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1detectDevices
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiMaster
 * Method:    c_setAccessLevel
 * Signature: (Ljava/lang/String;Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_de_michaeldenk_yasdi4j_YasdiMaster_c_1setAccessLevel
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
