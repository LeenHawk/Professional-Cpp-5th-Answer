import std;
import employee;
using namespace std;

int main()
{
    //  Create and populate an employee
    using Employee = HR::Employee;
    Employee anEmployee{
        anEmployee.firstInitial = 'J',
        anEmployee.lastInitial = 'D',
        anEmployee.employeeNumber = 42,
        anEmployee.salary = 80000,
        anEmployee.title = HR::title::Manager};
    // Output the values of an employee.
    cout << format("Employee: {}{} ", anEmployee.firstInitial, anEmployee.lastInitial) << endl;
    cout << format("Number: {} ", anEmployee.employeeNumber) << endl;
    cout << format("Salary: ${} ", anEmployee.salary) << endl;
    if(anEmployee.title==HR::title::Manager)
        cout << format("Title: Manager ") << endl;
    else if(anEmployee.title==HR::title::SeniorEngineer)
        cout << format("Title: Senior Engineer ") << endl;
    else{
        cout << format("Title: Engineer ") << endl;
    }
}