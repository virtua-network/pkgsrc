$NetBSD: patch-libcult-1.4.2_cult_containers_deque.hxx,v 1.1 2016/06/07 17:59:51 joerg Exp $

--- libcult-1.4.2/cult/containers/deque.hxx.orig	2016-06-04 21:42:29.518543508 +0000
+++ libcult-1.4.2/cult/containers/deque.hxx
@@ -53,6 +53,12 @@ namespace Cult
       IteratorAdapter<typename Base::const_iterator>
       ConstIterator;
 
+#if defined(_LIBCPP_VERSION) || __cplusplus >= 201103L
+      typedef ConstIterator EraseIterator;
+#else
+      typedef Iterator EraseIterator;
+#endif
+
 
       typedef
       IteratorAdapter<typename Base::reverse_iterator>
