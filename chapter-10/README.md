# Chapter-10 揭秘继承技术

## 10-1

从练习 9-2 中获取 Person 类，并添加一个名为 Employee 的派生类。可以省略练习 9-2 中的运算符 <=> 的重载。向 Employee 类添加一个数据成员，即 employee ID。提供适当的构造函数。再从 Employee 类派生另外两个类，称为 Manager 类和 Director 类。

将所有的类（包含 Person 类）放置在名为 HR 的名称空间中。注意，可以按以下方式导出名称空间中的所有内容。

```c++
export namespace HR { /* ... */ }
```

## 10-2

继续练习 10-1 中的解决方案，向 Person 类添加 toString() 方法，返回人员的字符串表示。在 Employee、Manager 和 Director 类中重写此方法，通过将其部分工作委托给父类，以此构建完整的字符串表示。

## 10-3

从练习 10-2 开始，练习“人”层次结构中类的多态行为。定义一个向量用来存储员工、经理和主管的混合，并用一些测试数据填充它。最后，使用一个基于范围 for 的循环，对向量中的所有元素调用 toString()。

## 10-4

在真实的公司中，员工可以晋升为经理或主管。在练习 10-3 的类层次结构中，是否可以添加对此功能的支持？
