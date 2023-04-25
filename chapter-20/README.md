# chapter-20 掌握标准库算法

## 20-1

使用最喜欢的标准库指南查找 fill() 算法的参数。向用户请求一个数字，然后使用 fill() 用给定的数字填充一个包含 10 个整数的 vector，再将 vector 的内容写到标准输出以进行验证。

## 20-2

回顾第16章“排列算法"一节，并使用标准库指南找到它们的参数。编写一个程序，要求用户输入一些数字，然后使用其中一种排列算法打印出这些数字所有可能的排列。

## 20-3

编写一个名为 trim() 的函数，删除给定字符串开头和结尾的所有空格并返回结果。提示：检查字符 c 是否为空白字符，可以使用 \<cctype\> 中定义的 std::isspace(c)。如果 c 是一个空白字符，则返回非零值，否则返回 0。在 main() 函数中使用几个字符串测试你的实现。

## 20-4

使用一种算法创建一个包含数字 1 到 100 的 vector。然后使用一个算法，将所有偶数和奇数拷贝到偶数和奇数容器中，而不对这些容器进行任何空间预留，确保偶数按升序排列，奇数按降序排列，谨慎地为偶数和奇数容器选择类型。提示：或许第 17 章有些东西可以用到。