export module director;
import employee;

export namespace HR
{
    class Director: public Employee{
        public:
            using Employee::Employee;
    };
};