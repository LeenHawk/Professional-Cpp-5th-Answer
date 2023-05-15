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
        Person(const string_view firstName,const string_view lastName):Person(firstName,lastName,firstName.front()){};
        Person(const string_view firstName,const string_view lastName,const char firstUnitOfName): \
            m_FirstName(firstName),m_LastName(lastName),m_FirstUnitOfName(firstUnitOfName){};
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
};
int main(){
    Person testman("Test","Man");
    cout<<format("The man's firstname is {},lastname is {},first unit is {}.\n",testman.getFirstName(),testman.getLastName(),testman.getFirstUnitOfName());
    testman.setFirstName("Man");
    testman.setLastName("Test");
    testman.setFirstUnitOfName('T');
    cout<<format("The man's firstname is {},lastname is {},first unit is {}.\n",testman.getFirstName(),testman.getLastName(),testman.getFirstUnitOfName());
}