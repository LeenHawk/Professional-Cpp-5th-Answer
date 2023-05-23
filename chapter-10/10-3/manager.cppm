export module manager;
import employee;
import std;

export namespace HR
{
    class Manager: public Employee{
        public:
            using Employee::Employee;
    		std::string toString() const override
		    {
			    return std::format("Manager is {}", Employee::toString());
		    }
    };

};