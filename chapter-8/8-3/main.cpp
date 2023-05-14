import <iostream>;
import <format>;
import <string>;
using namespace std;

class Person{
    private:
        string m_FirstName;
        string m_LastName;
    public:
        Person()=default;
        Person(const string_view firstName,const string_view lastName):m_FirstName(firstName),m_LastName(lastName){};
        Person(const Person& person):m_FirstName(person.getFirstName()),m_LastName(person.getLastName()){};

        Person& operator=(const Person& rhs){
            if(this==&rhs){
                return *this;
            }
            m_FirstName=rhs.getFirstName();
            m_LastName=rhs.getLastName();
            return *this;
        }

        ~Person(){};
        
        string getFirstName() const{
            return m_FirstName;
        };
        string getLastName() const{
            return m_LastName;
        };
        void setFirstName(const string_view firstName){
            m_FirstName=firstName;
        }
        void setLastName(const string_view lastName){
            m_LastName=lastName;
        }
};
int main(){
    Person testman("Test","Man");
    cout<<format("The man's firstname is {},lastname is {}.\n",testman.getFirstName(),testman.getLastName());
    testman.setFirstName("Man");
    testman.setLastName("Last");
    cout<<format("The man's firstname is {},lastname is {}.\n",testman.getFirstName(),testman.getLastName());
    Person testman1(testman);
    cout<<format("The man's firstname is {},lastname is {}.\n",testman1.getFirstName(),testman1.getLastName());
    Person testman2=testman;
    cout<<format("The man's firstname is {},lastname is {}.\n",testman2.getFirstName(),testman2.getLastName());
}