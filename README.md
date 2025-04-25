## HOW TO BUILD
To build all targets
```sh
# at root dir
bazel clean --expunge
bazel build --config=all_targets --dynamic_mode=fully
```

p.s. `bazel build //...` won't work for `local_repository` method. 

One can build project2 independently because it is self contained.
```sh
cd project2
bazel build //...
```
However, you cannot do this with **project1** or **test** because they dependent on other projects (e.g. **project2**). 

They can be built at the root dir
```sh
bazel build @project1//...
or 
bazel build @test//...
```
Bazel will configure what dependent projects to be built prior to them.