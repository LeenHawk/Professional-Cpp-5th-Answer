# Chapter-22 日期和时间工具

## 22-1

创建一个持续时间 d1,精度为秒，初始化为 42 秒。创建第二个持续时间 d2，初始化为 1.5 分钟。计算 d1 和 d2 的和。结果写到标准输出，一次以秒表示，一次以分钟表示。

## 22-2

让用户输入日期 yyyy-mm-dd,例如 2020-06-22。使用正则表达式（见第 21 章“字符串本地化和正则表达式”）提取年月日组件，最后使用 year_month_day 验证日期。

## 22-3

编写一个 getNumberOfDaysBetweenDates() 函数，计算两个给定日期之间的天数。在 main() 函数中测试实现。

## 22-4

编写一个打印出 2020 年 6 月 22 日星期几的程序。

## 22-5

构造UTC时间。将此时间转换为日本东京的当地时间。进一步将得到的时间转换为纽约时间。最后将计算出的时间换算成GMT时间。验证原始UTC时间和最终GMT时间是否相等。提示：东京的时区标识符是 Asia/Tokyo,纽约的时区标识符是 America/New_york，GMT 的时区标识符是GMT。

## 22-6

编写一个 getDurationSinceMidnight() 函数，返回从半夜到当前时间之间的持续时间。在 \<ctime\> 中定义的 mktime() 函数在实现中可能很有用。它接收 tm\* 作为参数并返回 time\_t。它基本上与 localtime()所做的相反。使用函数将半夜以来的秒数打印到标准输出控制台中。最后，使用 hh_mm_ss 类将函数返回的持续时间转换为小时、分钟和秒，并将结果打印到标准输出中。
