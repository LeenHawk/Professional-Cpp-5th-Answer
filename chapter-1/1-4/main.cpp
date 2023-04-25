import <iostream>;
import <format>;
import <vector>;
import employee;
using namespace std;

int main()
{
    //  Create and populate an employee
    using Employee = HR::Employee;
    Employee anEmployee1{
        anEmployee1.firstInitial = 'J',
        anEmployee1.lastInitial = 'D',
        anEmployee1.employeeNumber = 42,
        anEmployee1.salary = 80000,
        anEmployee1.title = HR::title::Manager};
    Employee anEmployee2{
        anEmployee2.firstInitial = 'A',
        anEmployee2.lastInitial = 'E',
        anEmployee2.employeeNumber = 11,
        anEmployee2.salary = 110000,
        anEmployee2.title = HR::title::SeniorEngineer};
    Employee anEmployee3{
        anEmployee3.firstInitial = 'Q',
        anEmployee3.lastInitial = 'B',
        anEmployee3.employeeNumber = 65,
        anEmployee3.salary = 65000,
        anEmployee3.title = HR::title::Engineer};
    std::vector<Employee> employees;
    employees.push_back(anEmployee1);
    employees.push_back(anEmployee2);
    employees.push_back(anEmployee3);
    // Output the values of employees.
    for (auto anEmployee : employees)
    {
        cout << format("Employee: {}{} ", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
        cout << format("Number: {} ", anEmployee.employeeNumber) << endl;
        cout << format("Salary: ${} ", anEmployee.salary) << endl;
        if (anEmployee.title == HR::title::Manager)
            cout << format("Title: Manager ") << endl;
        else if (anEmployee.title == HR::title::SeniorEngineer)
            cout << format("Title: Senior Engineer ") << endl;
        else
        {
            cout << format("Title: Engineer ") << endl;
        }
    }
}