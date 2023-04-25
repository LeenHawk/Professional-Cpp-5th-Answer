# Chapter-31 熟练掌握调试技术

## 31-1

调试的基本定律是什么？

## 31-2

你能发现下面这段代码有什么问题吗？

```c++
import <iostream>;
using namespace std;

int* getData(int value) { return new int { value * 2 }; }

int main()
{
    int* data { getData(21) };
    cout << *data << endl;
    data = getData(42);
    cout << *data << endl;
}
```

## 31-3

给定以下代码片段：

```c++
import <iostream>;
using namespace std;

int sum(int* values, int count)
{
    int total { 0 };
    for (int i { 0 }; i <= count; ++i) { total += values[i]; }
    return total;
}

int main()
{
    int values[] { 1, 2, 3 };
    int total { sum(values, size(values)) };
    cout << total << endl;
}
```

简单地计算一组值的和。对于值 1、2 和 3，期望值是 6。但是当在我的机器上运行代码的Debug版本时，结果是 -858993454。怎么回事呢？使用符号调试器及单步执行模式来查明错误结果的根本原因。请参阅调试器的文档，了解如何单步调试代码的每一行。

## 31-4

（高级）修改本章前面的 start-time 调试模式示例，使用 C++20 的 std::source_location 类（在第 14 章讨论），来摆脱旧的 log() 宏。这比听起来要棘手。问题是 Logger::log() 是个可变参数函数模板，因此不能在可变参数包之后添加一个命名的 source_location 参数。窍门是使用一个辅助类，例如 Log。构造函数接受可变参数包和 source_location，并将工作转发给 Logger::log()。窍门的最后一部分是下面的推导，参见第12章“用模板编写泛型代码”：

```c++
template <typename... Ts>
log(Ts&&...) -> log<Ts...>;
```
