# Examples to build C++ code

This package will showcase how to build C++ code in stages.

### Stage 1
The first stage is really simple and shows you how to compile a binary with a single source file.

### Stage 2
The second stage will showcase how to build an application with multiple source and header files, separated in a library and a binary.

### Stage 3
The third stage showcases how to link multiple build directories by building multiple libraries in different packages and then connecting it up with the main application.


### To run 

```
source setup.sh
cd stage1
dkb bazel --output_user_root=./tmp/build_output  build //main:hello-world 
```

### Lib visibility
1. `hdrs = ["hello-time.h"]`  required in the library

    ```
    fatal error: lib/hello-time.h: No such file or directory
    ```
2. `visibility = ["//main:__pkg__"]` required in the library 

    ```
    in cc_binary rule //main:hello-world: target '//lib:hello-time' is not visible from target '//main:hello-world'
    ```
3.  `deps = [...]` required (i.e declaring dependency like `target_link_libraries`) in the executable   

    ```
    lib/hello-time.h: No such file or directory
    ```

### Glob 
```
    srcs = glob(["*.cc"]), # picks up all .cc files in the BUILD directory
    hdrs = glob(["*.h"]),  # picks up all .h files
```
That is, the following diff does not change the outcome.
```diff
-    srcs = ["hello-time.cc"],
-    hdrs = ["hello-time.h"],
+    srcs = glob(["*.cc"]),
+    hdrs = glob(["*.h"]),
```
