export module employee;
import person;
import std;

export namespace HR
{
    class Employee: public Person{
        private:
            unsigned m_id;
        public:
            Employee(const std::string_view firstName, const std::string_view lastName);
            Employee(const std::string_view firstName, const std::string_view lastName, unsigned id);
            virtual unsigned getID() const;
            virtual void setID(unsigned id);
            [[nodiscard]] bool operator==(const Employee &rhs) const;
            [[nodiscard]] std::strong_ordering operator<=>(const Employee &rhs) const;
    };

    Employee::Employee(const std::string_view firstName, const std::string_view lastName):Employee{firstName,lastName,0}{};
    Employee::Employee(const std::string_view firstName, const std::string_view lastName, unsigned id):Person{firstName,lastName},m_id{id}{};
    unsigned Employee::getID() const{
        return m_id;
    }
    void Employee::setID(unsigned id){
        m_id=id;
    }
    [[nodiscard]] bool Employee::operator==(const Employee &rhs) const{
            return (this->getFirstUnitOfName() == rhs.getFirstUnitOfName() 
            && this->getFirstName() == rhs.getFirstName() 
            && this->getLastName() == rhs.getLastName()
            && m_id==rhs.getID());
    }
    [[nodiscard]] std::strong_ordering Employee::operator<=>(const Employee &rhs) const{
        if(m_id==rhs.getID()){
            return std::strong_ordering::equal;
        }
        else{
            if (this->getFirstUnitOfName() != rhs.getFirstUnitOfName()){
                return this->getFirstUnitOfName() <=> rhs.getFirstUnitOfName();
            }
            else{
                if (this->getFirstName() != rhs.getFirstName()){
                    return this->getFirstName() <=> rhs.getFirstName();
                }
                else{
                    return this->getLastName() <=> rhs.getLastName();
                }
            }
        }
    }
};