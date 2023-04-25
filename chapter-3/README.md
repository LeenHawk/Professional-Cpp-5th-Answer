# Chapter-3 编码风格

## 3-1

第一章讨论了一个雇员记录系统的示例。该系统有一个数据库，该数据库的方法之一是 displayCurrent()。这是该方法的实现，并带有一些注释：

```c++
void Database::displayCurrent() const           // The displayCurrent() method
{
    for (const auto& employee : m_employees) {  // For each employee...
        if (employee.isHired()) {               // If the employee is hired
            employee.display();                 // Then display that employee
        }
    }
}
```

你发现注释中的错误了吗？为什么？你能写出更好的注释吗？

## 3-2

第 1 章的雇员记录系统包含一个 Database 类。以下是该类的片段，只有三个方法。向此代码片段添加适当的 JavaDoc 风格注释。请参阅第 1 章以了解这些方法的具体作用。

```c++
class Database
{
    public:
        Employee& addEmployee(const std::string& firstName,
            const std::string& lastName);
        Employee& getEmployee(int employeeNumber);
        Employee& getEmployee(const std::string& firstName,
            const std::string& lastName);
        // Remainder omitted...
};
```

## 3-3

下面的类有许多命令问题，你能找出它们并提出更好的名字吗？

```c++
class xrayController
{
    public:
        // Gets the active X-ray current in μA.
        double getCurrent() const;
        // Sets the current of the X-rays to the given current in μA.
        void setIt(double Val);
        // Sets the current to 0 μA.
        void 0Current();
        // Gets the X-ray source type.
        const std::string &getSourceType() const;
        // Sets the X-ray source type.
        void setSourceType(std::string_view _Type);

    private:
        double d;                // The X-ray current in μA.
        std::string m_src__type; // The type of the X-ray source.
};
```

## 3-4

给定以下代码片段，格式化代码片段3次：首先将大括号单独写为一行，然后缩进每个大括号，最后删除单语句代码块的大括号。本练习让你了解不同的格式样式以及它们对代码可用性的影响。

```c++
Employee& Database::getEmployee(int employeeNumber)
{
    for (auto& employee : m_employees) {
        if (employee.getEmployeeNumber() == employeeNumber) {
            return employee;
        }
    }
    throw logic_error { "No employee found." };
}
```
