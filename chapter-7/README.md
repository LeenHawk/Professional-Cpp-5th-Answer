# chapter-7 内存管理

## 7-1

分析以下代码片段。你能列出你在其中发现的问题吗？在本练习中你不需要修复这些问题，那是练习 7-2 的事情。

```c++
const size_t numberOfElements { 10 };
int* values { new int[numberOfElements] };
// Set values to their index value.
for (int index { 0 }; index < numberOfElements; ++index) {
    values[index] = index;
}
// Set last value to 99.
values[10] = 99;
// Print all values.
for (int index { 0 }; index <= numberOfElements; ++index) {
    cout << values[index] << " ";
}
```

## 7-2

使用安全的现代 C++ 工具，重写上题中的代码片段。

## 7-3

编写一个基本类来存储具有x、y和z坐标的三维点。包含接受x、y和z参数的构造函数。编写一个接受三维点并使用 std::format() 打印其坐标的函数。在 main() 函数中，动态分配类的实例，然后调用函数。

## 7-4

在本章前面，以下函数出现在内存访问越界的部分。你能用安全的 C++ 替代品升级这个函数吗？在 main() 函数中测试你的解决方案。

```c++
void fillWithM(char* text)
{
    int i { 0 };
    while (text[i] != '\0') {
        text[i] = 'm';
        i++;
    }
}
```