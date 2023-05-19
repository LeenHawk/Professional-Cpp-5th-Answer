export module director;
import employee;
import <string>;

export namespace HR
{
    class Director: public Employee{
        public:
            using Employee::Employee;
    };
};