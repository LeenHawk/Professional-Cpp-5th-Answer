# chapter-19 函数指针，函数对象，lambda 表达式

## 19-1

使用 lambda 表达式重写本章中的 IsLargerThan 函数对象示例，可以在源码归档文件的 c19_code\04_FunctionObjects\01_IsLargerThan.cpp 中找到该代码。

## 19-2

使用 lambda 表达式重写 bind() 示例，可以在源码归档文件的 c19_code\04_FunctionObjects\07_bind.cpp 中找到该代码。

## 19-3

使用 lambda 表达式重写绑定类方法 Handler::handleMatch() 中的示例，可以在源码归档文件的c19_code\04_FunctionObjects\10_FindMatchesWitliMethodPointer.cpp 中找到该代码。

## 19-4

第18章介绍的 std::erase_if() 函数，用于从容器中删除某个谓词返回 true 的元素，现在己经了解了关于回调的所有内容，接下来编写一个小程序，创建整型 vector，然后使用 erase_if() 从 vector 中删除所有奇数值，传递给 erase_if() 的谓词应该接收单个值并返回一个布尔值。

## 19-5

实现一个名为 Processor 的类，构造函数应该接收一个回调函数，这个回调函数接收一个整数并返回一个整数。将这个回调保存在类的数据成员中，接下来，为接收整数并返回整数的函数调用运算符添加重载，该实现只是简单地将工作转发给存储的回调中。用不同的回调测试你的类。
