--- src/lib/lapack.cpp.old	2009-01-24 16:23:26.000000000 -0800
+++ src/lib/lapack.cpp	2009-01-24 16:23:39.000000000 -0800
@@ -18,7 +18,7 @@
 #include "lib/common.h"
 #include "lib/io.h"
 
-#if defined(HAVE_MKL) || defined(HAVE_ACML) || defined(DARWIN)
+#if defined(HAVE_MKL) || defined(HAVE_ACML) 
 #define DSYEV dsyev
 #define DGESVD dgesvd
 #define DPOSV dposv
