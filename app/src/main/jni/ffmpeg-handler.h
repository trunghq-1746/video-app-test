/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_david_camerapush_ffmpeg_FFmpegHandler */

#ifndef _Included_com_david_camerapush_ffmpeg_FFmpegHandler
#define _Included_com_david_camerapush_ffmpeg_FFmpegHandler
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_david_camerapush_ffmpeg_FFmpegHandler
 * Method:    init
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_david_camerapush_ffmpeg_FFmpegHandler_init
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_david_camerapush_ffmpeg_FFmpegHandler
 * Method:    changeFilter
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_david_camerapush_ffmpeg_FFmpegHandler_changeFilter
(JNIEnv *, jobject, jint);

/*
 * Class:     com_david_camerapush_ffmpeg_FFmpegHandler
 * Method:    pushCameraData
 * Signature: ([BI[BI[BI)I
 */
JNIEXPORT jint JNICALL Java_com_david_camerapush_ffmpeg_FFmpegHandler_pushCameraData
  (JNIEnv *, jobject, jint, jbyteArray, jint, jbyteArray, jint, jbyteArray, jint);

/*
 * Class:     com_david_camerapush_ffmpeg_FFmpegHandler
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_david_camerapush_ffmpeg_FFmpegHandler_close
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class com_david_camerapush_ffmpeg_FFmpegHandler_SingletonInstance */

#ifndef _Included_com_david_camerapush_ffmpeg_FFmpegHandler_SingletonInstance
#define _Included_com_david_camerapush_ffmpeg_FFmpegHandler_SingletonInstance
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
