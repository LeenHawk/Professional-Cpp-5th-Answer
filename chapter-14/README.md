# Chapter-14 错误处理

## 14-1

在不编译和执行的情况下，找到并纠正下面代码中的错误。

```c++
// Throws a logic_error exception if the number of elements
// in the given dataset is not even.
void verifyDataSize(const vector<int>& data)
{
    if (data.size() % 2 != 0)
    throw logic_error { "Number of data points must be even." };
}
// Throws a logic_error exception if the number of elements
// in the given dataset is not even.
// Throws a domain_error exception if one of the datapoints is negative.
void processData(const vector<int>& data)
{
    // Verify the size of the given dataset.
    try {
        verifyDataSize(data);
    } catch (const logic_error& caughtException) {
        // Write message on standard error output.
        cerr << "Invalid number of data points in dataset. Aborting." << endl;
        // And rethrow the exception.
        throw caughtException;
    }
    // Verify for negative datapoints.
    for (auto& value : data) {
        if (value < 0)
            throw domain_error { "Negative datapoints not allowed." };
    }
    // Process data ...
}
int main()
{
    try {
        vector data { 1, 2, 3, -5, 6, 9 };
        processData(data);
    } catch (const logic_error& caughtException) {
        cerr << "logic_error: " << caughtException.what() << endl;
    } catch (const domain_error& caughtException) {
        cerr << "domain_error: " << caughtException.what() << endl;
    }
}
```

## 14-2

拿到第13章中双向 I/O 例子中的代码（可在源代码文件中的 c13_code\19_Bidirectional 目录中找到）。示例中实现了changeNumberForID() 函数。修改代码，以便在合适的地方使用异常。一旦代码使用了异常，是否可以对 changeNumberForID() 函数的头文件进行更改？

## 14-3

将使用异常的正确错误处理添加到练习 13-3 的个人数据库解决方案中。

## 14-4

请看第9章中 SpreadSheet 的示例代码（可在源代码文件中的c09_code\07_SpreadsheetMoveSemanticsWithSwap目录中找到），该示例使用 swap() 支持移动语义。在代码中添加适当的错误处理，包括内存分配失败的处理。为类添加最大宽高，并添加恰当的验证检查。编写自己的异常类 InvalidCoordinate ，存储无效坐标和有效坐标的范围，在 verifyCoordinate() 方法中使用。在 main() 方法中写两个测试程序来测试各种错误条件。
