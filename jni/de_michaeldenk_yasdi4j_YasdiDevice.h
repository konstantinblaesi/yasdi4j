/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_michaeldenk_yasdi4j_YasdiDevice */

#ifndef _Included_de_michaeldenk_yasdi4j_YasdiDevice
#define _Included_de_michaeldenk_yasdi4j_YasdiDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef de_michaeldenk_yasdi4j_YasdiDevice_SPOT_VALUE_CHANNEL_MASK
#define de_michaeldenk_yasdi4j_YasdiDevice_SPOT_VALUE_CHANNEL_MASK 2319L
#undef de_michaeldenk_yasdi4j_YasdiDevice_PARAMETER_CHANNEL_MASK
#define de_michaeldenk_yasdi4j_YasdiDevice_PARAMETER_CHANNEL_MASK 1039L
/*
 * Class:     de_michaeldenk_yasdi4j_YasdiDevice
 * Method:    c_getChannels
 * Signature: (III)[Lde/michaeldenk/yasdi4j/YasdiChannel;
 */
JNIEXPORT jobjectArray JNICALL Java_de_michaeldenk_yasdi4j_YasdiDevice_c_1getChannels
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     de_michaeldenk_yasdi4j_YasdiDevice
 * Method:    c_findChannel
 * Signature: (ILjava/lang/String;)Lde/michaeldenk/yasdi4j/YasdiChannel;
 */
JNIEXPORT jobject JNICALL Java_de_michaeldenk_yasdi4j_YasdiDevice_c_1findChannel
  (JNIEnv *, jobject, jint, jstring);

#ifdef __cplusplus
}
#endif
#endif
