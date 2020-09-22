/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ibm_disni_rdma_verbs_impl_NativeDispatcher */

#ifndef _Included_com_ibm_disni_rdma_verbs_impl_NativeDispatcher
#define _Included_com_ibm_disni_rdma_verbs_impl_NativeDispatcher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _createEventChannel
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1createEventChannel
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _createId
 * Signature: (JS)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1createId
  (JNIEnv *, jobject, jlong, jshort);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _createQP
 * Signature: (JJJJIIII)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1createQP
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong, jint, jint, jint, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _bindAddr
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1bindAddr
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _listen
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1listen
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _resolveAddr
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1resolveAddr
  (JNIEnv *, jobject, jlong, jlong, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _resolveRoute
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1resolveRoute
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getCmEvent
 * Signature: (JJJI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getCmEvent
  (JNIEnv *, jobject, jlong, jlong, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _connect
 * Signature: (JIIJB)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1connect
  (JNIEnv *, jobject, jlong, jint, jint, jlong, jbyte);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _accept
 * Signature: (JII)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1accept
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _ackCmEvent
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1ackCmEvent
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _disconnect
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1disconnect
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyEventChannel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyEventChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyCmId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyCmId
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyQP
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyQP
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getSrcAddr
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getSrcAddr
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getDstAddr
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getDstAddr
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyEp
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyEp
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _allocPd
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1allocPd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _createCompChannel
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1createCompChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _createCQ
 * Signature: (JJII)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1createCQ
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _modifyQP
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1modifyQP
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _queryOdpSupport
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1queryOdpSupport
  (JNIEnv *env, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _expPrefetchMr
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1expPrefetchMr
  (JNIEnv *env, jobject, jlong, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _regMr
 * Signature: (JJIIJJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1regMr
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jlong, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _deregMr
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1deregMr
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _postSend
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1postSend
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _postRecv
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1postRecv
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getCqEvent
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getCqEvent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _pollCQ
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1pollCQ
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _reqNotifyCQ
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1reqNotifyCQ
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _ackCqEvent
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1ackCqEvent
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyCompChannel
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyCompChannel
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _deallocPd
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1deallocPd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _destroyCQ
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1destroyCQ
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getContext
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getContext
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getQpNum
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getQpNum
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getContextFd
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getContextFd
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getContextNumCompVectors
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getContextNumCompVectors
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getPdHandle
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getPdHandle
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getSockAddrInSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getSockAddrInSize
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getIbvRecvWRSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getIbvRecvWRSize
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getIbvSendWRSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getIbvSendWRSize
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getIbvSgeSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getIbvSgeSize
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getIbvWCSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getIbvWCSize
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getRemoteAddressOffset
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getRemoteAddressOffset
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getRKeyOffset
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getRKeyOffset
  (JNIEnv *, jobject);

/*
 * Class:     com_ibm_disni_rdma_verbs_impl_NativeDispatcher
 * Method:    _getVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ibm_disni_rdma_verbs_impl_NativeDispatcher__1getVersion
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
