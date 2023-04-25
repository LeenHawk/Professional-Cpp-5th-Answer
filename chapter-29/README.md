# Chapter-29 编写高效的 C++ 程序

## 29-1

在下面的代码片段中你可以发现哪些效率问题？

```c++
class Bar { };

class Foo
{
    public:
    explicit Foo(Bar b) {}
};

Foo getFoo(bool condition, Bar b1, Bar b2)
{
    return condition ? Foo { b1 } : Foo { b2 };
}

int main()
{
    Bar b1, b2;
    auto foo { getFoo(true, b1, b2) };
}
```

## 29-2

本章中最需要记住的两件事是什么？

## 29-3

修改 Profiling 部分的最终 NameDB 解决方案，使用 std::unordered_map 代替 map。分析更改前后的代码，并比较结果。

## 29-4

从习题 29-3 的剖析结果来看，现在 NameDB 构造函数中的 operator>> 似乎是瓶颈。你以修改实现来避免使用 operator>>吗？由于输入文件中的每一行都包含一个名字，也许逐行读取名字会更快？尝样修改你的实现，并比较更改前后的剖析结果。
