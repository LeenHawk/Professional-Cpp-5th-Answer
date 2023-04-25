# Chapter-34 开发跨平台和跨语言的一个应用程序

## 34-1

编写一个程序，输出所有标准 C++ 整数类型的大小。如果可能的话，尝试在不同平台上的不同编译器编译和执行它。

## 34-2

本章介绍整数大端和小端编码的概念。还解释说，在网络上，建议总是使用大端编码，并在必要时进行转换。编写一个程序，可以在小端和大端编码之间从两个方向上转换 16 位无符号整数，要特别注意所使用的数据类型。编写一个 main() 函数来测试你的函数。

**额外练习** 32位整数可以做相同的事情吗？

## 34-3

转换范例一节中结合 C和 C++ 的网络示例有些抽象，在这个示例中，C 函数的实现被省略，因为它们需要 C 和C++ 标准库都没有提供的网络代码。在这个练习中，我们看一个小得多的 C 库，你可能想在你的 C++ 代码中使用它。C 库基本由两个函数组成，一个是函数 reverseString()，它分配一个新的字符串，并使用给定源字符串的反转来初始化它。第二个函数 freeString() 用于释放由 reverseString() 分配的内存。下面是它们的声明和描述性注释：

```c
/// <summary>
/// Allocates a new string and initializes it with the reverse of a given string.
/// </summary>
/// <param name="string">The source string to reverse.</param>
/// <returns>A newly allocated buffer filled with the reverse of the 
/// given string.
/// The returned memory needs to be freed with freeString().</returns>
char* reverseString(char* string);
/// <summary>Frees the memory allocated for the given string.</summary>
/// <param name="string">The string to deallocate.</param>
void freeString(char* string);
```

如何在 C++ 代码中使用这个“库”？

## 34-4

本章中所有关于混用 C 和 C++ 代码的示例都是关于从 C++ 调用 C 代码的。当然，如果只使用 C 所知道的数据类型，也可能出现相反的情况。在这个练习中，你将两个方向结合起来。编写一个名为 writeTextFromC(const char\*)的 C 函数，调用一个名为 writeTextFromCpp(const char\*)的 C++ 函数，该函数使用 cout 将给定的字符串打印到标准输出。为了测试代码，在 C++ 中编写 main() 函数，调用 C 函数 writeTextFromC()。
