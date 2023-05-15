module person;

import <string>;

using namespace std;

class Person::Impl
{
private:
    string m_FirstName;
    string m_LastName;
    char m_FirstUnitOfName;

public:
    Impl() = default;
    Impl(const string_view firstName, const string_view lastName) : m_FirstName(firstName), m_LastName(lastName), m_FirstUnitOfName(firstName.front()){};
    Impl(const string_view firstName, const string_view lastName,const char c) : m_FirstName(firstName), m_LastName(lastName), m_FirstUnitOfName(c){};
    string getFirstName() const
    {
        return m_FirstName;
    };
    string getLastName() const
    {
        return m_LastName;
    };
    char getFirstUnitOfName() const
    {
        return m_FirstUnitOfName;
    };
    void setFirstName(const string_view firstName)
    {
        m_FirstName = firstName;
    }
    void setLastName(const string_view lastName)
    {
        m_LastName = lastName;
    }
    void setFirstUnitOfName(const char c)
    {
        m_FirstUnitOfName = c;
    }
};

Person::Person(const std::string_view firstName, const std::string_view lastName) : m_impl{make_unique<Impl>(firstName, lastName)} {};
Person::Person(const string_view firstName, const string_view lastName,const char firstUnitOfName) : m_impl{make_unique<Impl>(firstName, lastName,firstUnitOfName)}{};

std::string Person::getFirstName() const{
    return m_impl->getFirstName();
};
std::string Person::getLastName() const{
    return m_impl->getLastName();
};
char Person::getFirstUnitOfName() const{
    return m_impl->getFirstUnitOfName();
};
void Person::setFirstName(const std::string_view firstName){
    m_impl->setFirstName(firstName);
};
void Person::setLastName(const std::string_view lastName){
    m_impl->setLastName(lastName);
};
void Person::setFirstUnitOfName(const char c){
    m_impl->setFirstUnitOfName(c);
};
Person::~Person() = default;
