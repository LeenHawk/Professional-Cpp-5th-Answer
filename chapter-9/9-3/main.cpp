import <iostream>;
import <format>;
import <string>;
using namespace std;

class Person{
    private:
        string m_FirstName;
        string m_LastName;
        char m_FirstUnitOfName;
    public:
        Person()=default;
        Person(const string_view firstName,const string_view lastName): \
            m_FirstName(firstName),m_LastName(lastName),m_FirstUnitOfName(firstName.front()){};
        
        string getFirstName() const{
            return m_FirstName;
        };
        string getLastName() const{
            return m_LastName;
        };
        char getFirstUnitOfName() const{
            return m_FirstUnitOfName;
        };
        void setFirstName(const string_view firstName){
            m_FirstName=firstName;
        }
        void setLastName(const string_view lastName){
            m_LastName=lastName;
        }
        void setFirstUnitOfName(const char c){
            m_FirstUnitOfName=c;
        }

        [[nodiscard]] bool operator==(const Person& rhs) const{
            return (m_FirstUnitOfName==rhs.getFirstUnitOfName()&&m_FirstName==rhs.getFirstName()&&m_LastName==rhs.getLastName());
        };
        [[nodiscard]] bool operator<(const Person& rhs) const{
            if(m_FirstUnitOfName<rhs.getFirstUnitOfName()){
                return true;
            }else if(m_FirstUnitOfName==rhs.getFirstUnitOfName()){
                if(m_FirstName<rhs.getFirstName()){
                    return true;
                }else if(m_FirstName==rhs.getFirstName()){
                    return m_LastName<rhs.getLastName();
                }
            }
            return false;
        }
        [[nodiscard]] bool operator<=(const Person& rhs) const{
            return *this==rhs|*this<rhs;
        }
        [[nodiscard]] bool operator>=(const Person& rhs) const{
            return !(*this<rhs);
        }
        [[nodiscard]] bool operator>(const Person& rhs) const{
            return !(*this<=rhs);
        }
};
void compareTwoPerson(const Person& one,const Person& two){
    if(one==two){
        cout<<"Equal\n";
    }else if(one>two){
        cout<<"Bigger\n";
    }
    else{
        cout<<"Less\n";
    }
}
int main(){
    Person testman("Test","Man");
    Person testman1("Test","Man");
    compareTwoPerson(testman,testman1);
    testman.setFirstName("Man");
    testman.setLastName("Test");
    testman.setFirstUnitOfName('T');
    compareTwoPerson(testman,testman1);
    std::swap(testman,testman1);
    compareTwoPerson(testman,testman1);    
}