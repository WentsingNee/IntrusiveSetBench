### 使用说明 ###

需要使用 Boost 库和 freebsd-src 项目

freebsd-src 仓库链接: git@github.com:freebsd/freebsd-src.git

然后把 CMake 里这个变量改成存放 freebsd-src 项目的仓库目录

```cmake
set(FREE_BSD_DIR ~/open-source/git-cold/freebsd-src/)
```

构建:

```shell
mkdir build && cd build
cmake ../ -DCMAKE_BUILD_TYPE=Release
cmake --build . --target all
```

测试:

```shell
../auto_run.sh
```
