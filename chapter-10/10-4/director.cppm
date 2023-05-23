export module director;
import employee;
import std;

export namespace HR
{
    class Director: public Employee{
        public:
            using Employee::Employee;
            Director(const Employee& employee): Employee{ employee }{}
            std::string toString() const override
		    {
			    return std::format("Director is {}", Employee::toString());
		    }
    };
};