export module director;
import employee;
import <string>;

export namespace HR
{
    class Director: public Employee{
        public:
            using Employee::Employee;
            std::string toString() const override
		    {
			    return std::format("Director is {}", Employee::toString());
		    }
    };
};