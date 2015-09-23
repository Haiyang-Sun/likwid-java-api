/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rrze_likwid_LikwidMarkerAPI */

#ifndef _Included_org_rrze_likwid_LikwidMarkerAPI
#define _Included_org_rrze_likwid_LikwidMarkerAPI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_init
  (JNIEnv *, jobject);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    threadInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_threadInit
  (JNIEnv *, jobject);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    register
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_register
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    start
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_start
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    stop
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_stop
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    getResults
 * Signature: (Ljava/lang/String;ILorg/rrze/likwid/LikwidMarkerResults;)V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_getResults
  (JNIEnv *, jobject, jstring, jint, jobject);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    nextGroup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_nextGroup
  (JNIEnv *, jobject);

/*
 * Class:     org_rrze_likwid_LikwidMarkerAPI
 * Method:    close
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_rrze_likwid_LikwidMarkerAPI_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif