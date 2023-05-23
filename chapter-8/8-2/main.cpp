import std;
using namespace std;

class Person{
    private:
        string m_FirstName;
        string m_LastName;
    public:
        Person()=default;
        Person(const string_view firstName,const string_view lastName):m_FirstName(firstName),m_LastName(lastName){};
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
    Person phoneBook[3];
}