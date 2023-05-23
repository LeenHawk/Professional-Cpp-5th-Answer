export module person;

import std;

export class Person{
    public:
        Person(const std::string_view firstName,const std::string_view lastName);
        Person(const std::string_view firstName,const std::string_view lastName,const char firstUnitOfName);
        Person()=default;
        ~Person();
        std::string getFirstName() const;
        std::string getLastName() const;
        char getFirstUnitOfName() const;
        void setFirstName(const std::string_view firstName);
        void setLastName(const std::string_view lastName);
        void setFirstUnitOfName(const char c);
    private:
        class Impl;
        std::unique_ptr<Impl> m_impl;
};