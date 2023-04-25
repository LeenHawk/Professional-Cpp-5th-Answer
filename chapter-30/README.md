# Chapter-30 熟练掌握测试技术

## 30-1

测试的3种类型是什么？

## 30-2

列出你能想到的以下代码段的单元测试列表：

```c++
export class Foo
{
    public:
        // Constructs a Foo. Throws invalid_argument if a >= b.
        Foo(int a, int b) : m_a { a }, m_b { b }
        {
            if (a >= b) {
                throw std::invalid_argument { "a should be less than b." };
            }
        }
        
        int getA() const { return m_a; }
        int getB() const { return m_b; }
    private:
        int m_a, m_b;
};
```

## 30-3

如果你正在使用 Visual C++，使用 Visual C++ 测试框架实现习题 30-2 中列出的单元测试。

## 30-4

假设你写了一个计算数字阶乘的函数。n 的阶乘写成 n!，是 1 到 n 所有数字的乘积。例如， $3!=1 \times 2 \times 3$。你决定遵循本章给出的建议，为你的代码编写单元测试。运行代码来计算 5!，然后编写一个单元测试来验证。当要计算 5 的阶乘时，代码是否生成了计算出的数字。你如何看待这样的单元测试。
