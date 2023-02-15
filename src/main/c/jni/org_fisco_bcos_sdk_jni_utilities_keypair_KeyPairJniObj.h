/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj */

#ifndef _Included_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
#define _Included_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    createJniKeyPair
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_createJniKeyPair__I
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    createHsmKeyPair
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_createHsmKeyPair__Ljava_lang_String_2
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    createJniKeyPair
 * Signature: (I[B)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_createJniKeyPair__I_3B
  (JNIEnv *, jclass, jint, jbyteArray);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    createHsmKeyPair
 * Signature: ([BLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_createHsmKeyPair___3BLjava_lang_String_2
  (JNIEnv *, jclass, jbyteArray, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    useHsmKeyPair
 * Signature: (ILjava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_useHsmKeyPair
  (JNIEnv *, jclass, jint, jstring, jstring);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    getJniKeyPairAddress
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_getJniKeyPairAddress
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    getJniKeyPairPubKey
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_getJniKeyPairPubKey
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    getJniKeyPairPrivateKey
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_getJniKeyPairPrivateKey
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    getJniKeyPairCryptoType
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_getJniKeyPairCryptoType
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj
 * Method:    destroyJniKeyPair
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_fisco_bcos_sdk_jni_utilities_keypair_KeyPairJniObj_destroyJniKeyPair
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
