/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gov_lbl_fastbit_FastBit */

#ifndef _Included_gov_lbl_fastbit_FastBit
#define _Included_gov_lbl_fastbit_FastBit
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    build_indexes
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_build_1indexes
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    purge_indexes
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_purge_1indexes
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    build_index
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_build_1index
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    purge_index
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_purge_1index
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    build_query
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lgov/lbl/fastbit/FastBit/QueryHandle;
 */
JNIEXPORT jobject JNICALL Java_gov_lbl_fastbit_FastBit_build_1query
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    destroy_query
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_destroy_1query
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_result_row_ids
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;)[I
 */
JNIEXPORT jintArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1result_1row_1ids
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_result_size
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_get_1result_1size
  (JNIEnv *, jobject, jobject);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_bytes
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1bytes
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_shorts
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[S
 */
JNIEXPORT jshortArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1shorts
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_ints
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[I
 */
JNIEXPORT jintArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1ints
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_longs
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[J
 */
JNIEXPORT jlongArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1longs
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_floats
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[F
 */
JNIEXPORT jfloatArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1floats
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_qualified_doubles
 * Signature: (Lgov/lbl/fastbit/FastBit/QueryHandle;Ljava/lang/String;)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_gov_lbl_fastbit_FastBit_get_1qualified_1doubles
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    write_buffer
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_write_1buffer
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_doubles
 * Signature: (Ljava/lang/String;[D)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1doubles
  (JNIEnv *, jobject, jstring, jdoubleArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_floats
 * Signature: (Ljava/lang/String;[F)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1floats
  (JNIEnv *, jobject, jstring, jfloatArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_longs
 * Signature: (Ljava/lang/String;[J)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1longs
  (JNIEnv *, jobject, jstring, jlongArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_ints
 * Signature: (Ljava/lang/String;[I)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1ints
  (JNIEnv *, jobject, jstring, jintArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_shorts
 * Signature: (Ljava/lang/String;[S)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1shorts
  (JNIEnv *, jobject, jstring, jshortArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    add_bytes
 * Signature: (Ljava/lang/String;[B)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_add_1bytes
  (JNIEnv *, jobject, jstring, jbyteArray);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    number_of_rows
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_number_1of_1rows
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    number_of_columns
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_number_1of_1columns
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_message_level
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_get_1message_1level
  (JNIEnv *, jobject);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    set_message_level
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_set_1message_1level
  (JNIEnv *, jobject, jint);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    set_logfile
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_gov_lbl_fastbit_FastBit_set_1logfile
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    get_logfile
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gov_lbl_fastbit_FastBit_get_1logfile
  (JNIEnv *, jobject);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    init
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gov_lbl_fastbit_FastBit_init
  (JNIEnv *, jobject, jstring);

/*
 * Class:     gov_lbl_fastbit_FastBit
 * Method:    cleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gov_lbl_fastbit_FastBit_cleanup
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
