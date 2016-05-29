/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif


/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1,
  SWIG_JavaIOException,
  SWIG_JavaRuntimeException,
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else

    #define STB_VORBIS_HEADER_ONLY
    #include "stb_vorbis.c"
    #undef STB_VORBIS_HEADER_ONLY


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1alloc_1alloc_1buffer_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jstring jarg2) {
  stb_vorbis_alloc *arg1 = (stb_vorbis_alloc *) 0 ;
  char *arg2 = (char *) 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_alloc **)&jarg1;
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return ;
  }
  {
    free(arg1->alloc_buffer);
    if (arg2) {
      arg1->alloc_buffer = (char *) malloc(strlen((const char *)arg2)+1);
      strcpy((char *)arg1->alloc_buffer, (const char *)arg2);
    } else {
      arg1->alloc_buffer = 0;
    }
  }
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
}


SWIGEXPORT jstring JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1alloc_1alloc_1buffer_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jstring jresult = 0 ;
  stb_vorbis_alloc *arg1 = (stb_vorbis_alloc *) 0 ;
  char *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_alloc **)&jarg1;
  result = (char *) ((arg1)->alloc_buffer);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1alloc_1alloc_1buffer_1length_1in_1bytes_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  stb_vorbis_alloc *arg1 = (stb_vorbis_alloc *) 0 ;
  int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_alloc **)&jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->alloc_buffer_length_in_bytes = arg2;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1alloc_1alloc_1buffer_1length_1in_1bytes_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  stb_vorbis_alloc *arg1 = (stb_vorbis_alloc *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_alloc **)&jarg1;
  result = (int) ((arg1)->alloc_buffer_length_in_bytes);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_new_1stb_1vorbis_1alloc(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  stb_vorbis_alloc *result = 0 ;

  (void)jenv;
  (void)jcls;
  result = (stb_vorbis_alloc *)calloc(1, sizeof(stb_vorbis_alloc));
  *(stb_vorbis_alloc **)&jresult = result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_delete_1stb_1vorbis_1alloc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  stb_vorbis_alloc *arg1 = (stb_vorbis_alloc *) 0 ;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis_alloc **)&jarg1;
  free((char *) arg1);
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1sample_1rate_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->sample_rate = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1sample_1rate_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (unsigned int) ((arg1)->sample_rate);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1channels_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->channels = arg2;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1channels_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (int) ((arg1)->channels);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1setup_1memory_1required_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->setup_memory_required = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1setup_1memory_1required_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (unsigned int) ((arg1)->setup_memory_required);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1setup_1temp_1memory_1required_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->setup_temp_memory_required = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1setup_1temp_1memory_1required_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (unsigned int) ((arg1)->setup_temp_memory_required);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1temp_1memory_1required_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jlong jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (unsigned int)jarg2;
  if (arg1) (arg1)->temp_memory_required = arg2;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1temp_1memory_1required_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jlong jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (unsigned int) ((arg1)->temp_memory_required);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1max_1frame_1size_1set(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_, jint jarg2) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  int arg2 ;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  arg2 = (int)jarg2;
  if (arg1) (arg1)->max_frame_size = arg2;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1info_1max_1frame_1size_1get(JNIEnv *jenv, jclass jcls, jlong jarg1, jobject jarg1_) {
  jint jresult = 0 ;
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  (void)jarg1_;
  arg1 = *(stb_vorbis_info **)&jarg1;
  result = (int) ((arg1)->max_frame_size);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_new_1stb_1vorbis_1info(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  stb_vorbis_info *result = 0 ;

  (void)jenv;
  (void)jcls;
  result = (stb_vorbis_info *)calloc(1, sizeof(stb_vorbis_info));
  *(stb_vorbis_info **)&jresult = result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_delete_1stb_1vorbis_1info(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  stb_vorbis_info *arg1 = (stb_vorbis_info *) 0 ;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis_info **)&jarg1;
  free((char *) arg1);
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1info(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  stb_vorbis_info result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = stb_vorbis_get_info(arg1);
  {
    stb_vorbis_info * resultptr = (stb_vorbis_info *) malloc(sizeof(stb_vorbis_info));
    memmove(resultptr, &result, sizeof(stb_vorbis_info));
    *(stb_vorbis_info **)&jresult = resultptr;
  }
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1error(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = (int)stb_vorbis_get_error(arg1);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1close(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  stb_vorbis_close(arg1);
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1sample_1offset(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = (int)stb_vorbis_get_sample_offset(arg1);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1file_1offset(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = (unsigned int)stb_vorbis_get_file_offset(arg1);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1open_1pushdata(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jlong jarg4, jlong jarg5, jobject jarg5_) {
  jlong jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  stb_vorbis_alloc *arg5 = (stb_vorbis_alloc *) 0 ;
  stb_vorbis *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg5_;
  arg1 = *(unsigned char **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(int **)&jarg4;
  arg5 = *(stb_vorbis_alloc **)&jarg5;
  result = (stb_vorbis *)stb_vorbis_open_pushdata((unsigned char const *)arg1,arg2,arg3,arg4,(stb_vorbis_alloc const *)arg5);
  *(stb_vorbis **)&jresult = result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1decode_1frame_1pushdata(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jint jarg3, jlong jarg4, jlong jarg5, jlong jarg6) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  unsigned char *arg2 = (unsigned char *) 0 ;
  int arg3 ;
  int *arg4 = (int *) 0 ;
  float ***arg5 = (float ***) 0 ;
  int *arg6 = (int *) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = *(unsigned char **)&jarg2;
  arg3 = (int)jarg3;
  arg4 = *(int **)&jarg4;
  arg5 = *(float ****)&jarg5;
  arg6 = *(int **)&jarg6;
  result = (int)stb_vorbis_decode_frame_pushdata(arg1,(unsigned char const *)arg2,arg3,arg4,arg5,arg6);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1flush_1pushdata(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  stb_vorbis_flush_pushdata(arg1);
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1decode_1filename(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2, jlong jarg3, jlong jarg4) {
  jint jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int *arg2 = (int *) 0 ;
  int *arg3 = (int *) 0 ;
  short **arg4 = (short **) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = *(int **)&jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(short ***)&jarg4;
  result = (int)stb_vorbis_decode_filename((char const *)arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1decode_1memory(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jlong jarg4, jlong jarg5) {
  jint jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  int *arg4 = (int *) 0 ;
  short **arg5 = (short **) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(unsigned char **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(int **)&jarg4;
  arg5 = *(short ***)&jarg5;
  result = (int)stb_vorbis_decode_memory((unsigned char const *)arg1,arg2,arg3,arg4,arg5);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1open_1memory(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jlong jarg4, jobject jarg4_) {
  jlong jresult = 0 ;
  unsigned char *arg1 = (unsigned char *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  stb_vorbis_alloc *arg4 = (stb_vorbis_alloc *) 0 ;
  stb_vorbis *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg4_;
  arg1 = *(unsigned char **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(stb_vorbis_alloc **)&jarg4;
  result = (stb_vorbis *)stb_vorbis_open_memory((unsigned char const *)arg1,arg2,arg3,(stb_vorbis_alloc const *)arg4);
  *(stb_vorbis **)&jresult = result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1open_1filename(JNIEnv *jenv, jclass jcls, jstring jarg1, jlong jarg2, jlong jarg3, jobject jarg3_) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  int *arg2 = (int *) 0 ;
  stb_vorbis_alloc *arg3 = (stb_vorbis_alloc *) 0 ;
  stb_vorbis *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg3_;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  arg2 = *(int **)&jarg2;
  arg3 = *(stb_vorbis_alloc **)&jarg3;
  result = (stb_vorbis *)stb_vorbis_open_filename((char const *)arg1,arg2,(stb_vorbis_alloc const *)arg3);
  *(stb_vorbis **)&jresult = result;
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1open_1file(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jlong jarg4, jobject jarg4_) {
  jlong jresult = 0 ;
  FILE *arg1 = (FILE *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  stb_vorbis_alloc *arg4 = (stb_vorbis_alloc *) 0 ;
  stb_vorbis *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg4_;
  arg1 = *(FILE **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(stb_vorbis_alloc **)&jarg4;
  result = (stb_vorbis *)stb_vorbis_open_file(arg1,arg2,arg3,(stb_vorbis_alloc const *)arg4);
  *(stb_vorbis **)&jresult = result;
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1open_1file_1section(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jlong jarg4, jobject jarg4_, jlong jarg5) {
  jlong jresult = 0 ;
  FILE *arg1 = (FILE *) 0 ;
  int arg2 ;
  int *arg3 = (int *) 0 ;
  stb_vorbis_alloc *arg4 = (stb_vorbis_alloc *) 0 ;
  unsigned int arg5 ;
  stb_vorbis *result = 0 ;

  (void)jenv;
  (void)jcls;
  (void)jarg4_;
  arg1 = *(FILE **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(int **)&jarg3;
  arg4 = *(stb_vorbis_alloc **)&jarg4;
  arg5 = (unsigned int)jarg5;
  result = (stb_vorbis *)stb_vorbis_open_file_section(arg1,arg2,arg3,(stb_vorbis_alloc const *)arg4,arg5);
  *(stb_vorbis **)&jresult = result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1seek_1frame(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  unsigned int arg2 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (unsigned int)jarg2;
  result = (int)stb_vorbis_seek_frame(arg1,arg2);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1seek(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  unsigned int arg2 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (unsigned int)jarg2;
  result = (int)stb_vorbis_seek(arg1,arg2);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT void JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1seek_1start(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  stb_vorbis_seek_start(arg1);
}


SWIGEXPORT jlong JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1stream_1length_1in_1samples(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  unsigned int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = (unsigned int)stb_vorbis_stream_length_in_samples(arg1);
  jresult = (jlong)result;
  return jresult;
}


SWIGEXPORT jfloat JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1stream_1length_1in_1seconds(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jfloat jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  float result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  result = (float)stb_vorbis_stream_length_in_seconds(arg1);
  jresult = (jfloat)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1frame_1float(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int *arg2 = (int *) 0 ;
  float ***arg3 = (float ***) 0 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = *(int **)&jarg2;
  arg3 = *(float ****)&jarg3;
  result = (int)stb_vorbis_get_frame_float(arg1,arg2,arg3);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1frame_1short_1interleaved(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  short *arg3 = (short *) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(short **)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_frame_short_interleaved(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1frame_1short(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  short **arg3 = (short **) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(short ***)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_frame_short(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1samples_1float_1interleaved(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  float *arg3 = (float *) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(float **)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_samples_float_interleaved(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1samples_1float(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  float **arg3 = (float **) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(float ***)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_samples_float(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1samples_1short_1interleaved(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  short *arg3 = (short *) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(short **)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_samples_short_interleaved(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_stb_1vorbis_1get_1samples_1short(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  stb_vorbis *arg1 = (stb_vorbis *) 0 ;
  int arg2 ;
  short **arg3 = (short **) 0 ;
  int arg4 ;
  int result;

  (void)jenv;
  (void)jcls;
  arg1 = *(stb_vorbis **)&jarg1;
  arg2 = (int)jarg2;
  arg3 = *(short ***)&jarg3;
  arg4 = (int)jarg4;
  result = (int)stb_vorbis_get_samples_short(arg1,arg2,arg3,arg4);
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_VORBIS_1need_1more_1data_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum STBVorbisError result;

  (void)jenv;
  (void)jcls;
  result = (enum STBVorbisError)VORBIS_need_more_data;
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_VORBIS_1unexpected_1eof_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum STBVorbisError result;

  (void)jenv;
  (void)jcls;
  result = (enum STBVorbisError)VORBIS_unexpected_eof;
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_VORBIS_1invalid_1setup_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum STBVorbisError result;

  (void)jenv;
  (void)jcls;
  result = (enum STBVorbisError)VORBIS_invalid_setup;
  jresult = (jint)result;
  return jresult;
}


SWIGEXPORT jint JNICALL Java_com_shc_androidopenal_STBVorbisJNI_VORBIS_1missing_1capture_1pattern_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  enum STBVorbisError result;

  (void)jenv;
  (void)jcls;
  result = (enum STBVorbisError)VORBIS_missing_capture_pattern;
  jresult = (jint)result;
  return jresult;
}


#ifdef __cplusplus
}
#endif
