$NetBSD: patch-python_google_protobuf_pyext_extension_dict.cc,v 1.1 2019/01/08 05:56:19 markd Exp $

python3.7 fixes 

--- python/google/protobuf/pyext/extension_dict.cc.orig	2018-07-30 22:16:10.000000000 +0000
+++ python/google/protobuf/pyext/extension_dict.cc
@@ -53,7 +53,7 @@
   #endif
   #define PyString_AsStringAndSize(ob, charpp, sizep) \
     (PyUnicode_Check(ob)? \
-       ((*(charpp) = PyUnicode_AsUTF8AndSize(ob, (sizep))) == NULL? -1: 0): \
+       ((*(charpp) = const_cast<char*>(PyUnicode_AsUTF8AndSize(ob, (sizep)))) == NULL? -1: 0): \
        PyBytes_AsStringAndSize(ob, (charpp), (sizep)))
 #endif
 
