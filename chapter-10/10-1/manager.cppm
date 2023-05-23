export module manager;
import employee;

export namespace HR
{
    class Manager: public Employee{
        public:
            using Employee::Employee;
    };
};