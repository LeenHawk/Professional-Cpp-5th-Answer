# Chapter-25 自定义和拓展标准库

## 25-1

编写一个名为 transform_if() 的的算法，类似第 20 章时讨论的标准库中的 transform()。区别在于 transform_if() 应该接收一个额外的谓词，并且它只转换谓词返回 true 的元素。其他元素保持不变。要测试你的算法，可创建一个整数的 vector 并将 vector 中的所有奇数值乘2。

## 25-2

编写一个名为 generate_fibonacci() 的算法，它用斐波那契数列填充给定的范围。 斐波那契数列从0和1开始，任何后面的值都是前面两个值的和。所以有：0，1，2，3，5，8，13，21，34，55，89等。你的实现不允许包含任何手写的循环或者使用递归算法来实现。相反，应该使用标准库的 generate() 算法来完成大部分工作。

## 25-3

为 directed_graph 类模板实现 find\(const T&\) 方法的 const 和非 const 重载版本。

## 25-4

C++20 为所有关联容器添加了一个 contains() 方法，如果给定的元素在容器中，则返回 true，否则返回 false。因为这对directed_graph 也很有用，所以将 contains() 的实现添加到 directed_graph 中。
