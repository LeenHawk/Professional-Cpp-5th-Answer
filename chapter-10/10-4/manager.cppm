export module manager;
import employee;
import <string>;

export namespace HR
{
    class Manager: public Employee{
        public:
            using Employee::Employee;
            Manager(const Employee& employee): Employee{ employee }{}
    		std::string toString() const override
		    {
			    return std::format("Manager is {}", Employee::toString());
		    }
    };

};