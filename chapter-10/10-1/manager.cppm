export module manager;
import employee;
import <string>;

export namespace HR
{
    class Manager: public Employee{
        public:
            using Employee::Employee;
    };
};