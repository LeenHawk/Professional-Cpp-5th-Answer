# Chapter-11 零碎的工作

## 11-1

在 Simulator 名称空间中编写一个名为 Simulator 的单文件模块，其中包含两个类 CarSimulator 和 BikeSimulator。课程的内容对于这些联系并不重要。只需要提供一个将消息输出到标准输出的默认构造函数。在 main() 函数中测试编写的代码。

## 11-2

练习 11-1 中的解决方案将模块分成几个文件：一个没有任何实现的主模块接口文件和两个模块实现文件，一个用于 CarSimulator 类，一个用于 BikeSimulator 类。

## 11-3

将练习 11-2 中的解决方案转换为使用一个主模块接口文件和两个模块接口分区文件，一个用于包含 CarSimulator 类的模拟器： car 分区；另一个用于包含 BikeSimulator 类的模拟器： bike 分区。

## 11-4

对于练习 11-3 中的解决方案，添加一个名为 internals 的实现分区，该分区在 Simulator 名称空间中包含一个名为 convertMilesToKm(double miles) 的辅助方法。一英里等于 1.6 公里。 在 CarSimulator 类和 BikeSimulator 类中都添加一个名为 setOdometer(double miles) 的方法，这个方法使用辅助方法将给定的英里转换为公里，然后将其输出到标准输出中。在 main() 函数中确认 setOdometer() 对这两个类都有效。还要确认 main() 函数不能调用 convertMilesToKm()。