export module person;

import std;
export class Person{
    private:
        std::string m_FirstName;
        std::string m_LastName;
        char m_FirstUnitOfName;
    public:
        Person()=default;
        Person(const std::string_view firstName,const std::string_view lastName): \
            m_FirstName(firstName),m_LastName(lastName),m_FirstUnitOfName(firstName.front()){};
        
        std::string getFirstName() const{
            return m_FirstName;
        };
        std::string getLastName() const{
            return m_LastName;
        };
        char getFirstUnitOfName() const{
            return m_FirstUnitOfName;
        };
        void setFirstName(const std::string_view firstName){
            m_FirstName=firstName;
        };
        void setLastName(const std::string_view lastName){
            m_LastName=lastName;
        };
        void setFirstUnitOfName(const char c){
            m_FirstUnitOfName=c;
        };

        [[nodiscard]] bool operator==(const Person& rhs) const{
            return (getFirstUnitOfName()==rhs.getFirstUnitOfName()&&getFirstName()==rhs.getFirstName()&&getLastName()==rhs.getLastName());
        };

        [[nodiscard]] std::strong_ordering operator<=>(const Person& rhs) const{
            if(getFirstUnitOfName()!=rhs.getFirstUnitOfName()){
                return getFirstUnitOfName()<=>rhs.getFirstUnitOfName();
            }else{
                if(getFirstName()!=rhs.getFirstName()){
                    return getFirstName()<=>rhs.getFirstName();
                }else{
                    return getLastName()<=>rhs.getLastName();
                }
            }
        };

        void output(std::ostream& out) const{
            out<<format("{} {},{}",getFirstName(),getLastName(),getFirstUnitOfName())<< std::endl;        
        };
};