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

**answer**:

多余注释，可以浓缩为以下注释：

```c++
void Database::displayCurrent() const
{
    // Display all hired employees.
    for (const auto& employee : m_employees) {
        if (employee.isHired()) {
            employee.display();
        }
    }
}
```

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

**answer**:

```c++
/**
 * The Database stores a collection of employees. It supports
 * adding and retrieving employees, and displaying employees
 * satisfying certain constraints.
 */
class Database
{
public:
    /**
    * Adds an employee with given name to the database.
    *
    * @param firstName The first name of the employee to add.
    * @param lastName The last name of the employee to add.
    */
    Employee& addEmployee(const std::string& firstName,
        const std::string& lastName);

    /**
    * Finds an employee based on an employee number.
    *
    * @param employeeNumber The employee number to find.
    * @return The employee with given number.
    * @throws logic_error When the requested employee cannot be found.
    */
    Employee& getEmployee(int employeeNumber);

    /**
    * Finds an employee based on a name.
    *
    * @param firstName The first name of the employee to find.
    * @param lastName The last name of the employee to find.
    * @return The employee with given name.
    * @throws logic_error When the requested employee cannot be found.
    */
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

**answer**:

```c++
class XrayController                                           //// xrayController: Class names start with an uppercase letter.
{
public:
    // Gets the active X-ray current in µA.
    double getCurrent() const;

    // Sets the current of the X-rays to the given current in µA.
    void setCurrent(double currentInMicroAmp);                 //// setIt(): too generic name.
                                                               //// Val: parameters start with a lowercase letter.
                                                               ////      and should have a meaningful name

    // Sets the current to 0 µA.
    void setZeroCurrent();                                     //// 0Current(): identifiers are not allowed to start with a digit.

    // Gets the X-ray source type.
    const std::string& getSourceType() const;

    // Sets the X-ray source type.
    void setSourceType(std::string_view type);                 //// _Type: identifiers should not start with an underscore followed by a capital.

private:
    double m_current; // The X-ray current in µA.              //// d: too short and meaningless. Data members start with m_
    std::string m_sourceType; // The type of the X-ray source. //// m_src__type: Double underscores and abbreviations are not allowed. 
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

**answer**:

```c++
Employee& Database::getEmployee(int employeeNumber)
{
    for (auto& employee : m_employees) 
{
        if (employee.getEmployeeNumber() == employeeNumber) 
{
            return employee;
}
}
    throw logic_error { "No employee found." };
}
```

```c++
Employee& Database::getEmployee(int employeeNumber)
{
    for (auto& employee : m_employees) 
        if (employee.getEmployeeNumber() == employeeNumber) 
            return employee;
    throw logic_error { "No employee found." };
}
```
