# Professional C++ 5th edition answer

这是对于《Professional C++》第五版的一些自己做的答案（可能借鉴了一点点原书答案），采用MSVC最新支持的C++语法。

## MSVC

主要使用，均可运行。

## GCC

不支持

## Clang

简单测试，未完全覆盖，需要自行编译安装 libc++ module(libstdc++ 没有 module)。

过程为：

```shell
git clone https://github.com/llvm/llvm-project.git
cd llvm-project
mkdir build
cmake -G Ninja -S runtimes -B build -DLIBCXX_ENABLE_STD_MODULES=ON -DLLVM_ENABLE_RUNTIMES="libcxx;libcxxabi;libunwind"
ninja -C build
```

记 `build` 文件夹为 `<build>`


编译指令为在项目同级文件夹输入（重点要给cmake指定`LIBCXX_BUILD`变量和编译器）:

```shell
mkdir build
cmake -G Ninja -S . -B build -DCMAKE_CXX_COMPILER=<path-to-clang> -DLIBCXX_BUILD=<build>
ninja -C build
build/main
```