#!/bin/bash

# Create install directories
mkdir -p install/bin install/lib

# Copy built artifacts
cp bazel-bin/hello_world install/bin/
cp bazel-bin/libutil.a install/lib/
cp bazel-bin/libutil.so install/lib/

echo "Installation complete. Files copied to ./install/"
