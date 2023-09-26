export module person;

import std;
export namespace HR
{
    class Person
    {
    private:
        std::string m_FirstName;
        std::string m_LastName;
        char m_FirstUnitOfName;

    public:
        Person(const std::string_view firstName, const std::string_view lastName) 
        : m_FirstName(firstName), m_LastName(lastName), m_FirstUnitOfName(firstName.front()){};
        Person() = default;
        virtual ~Person()=default;
        virtual std::string getFirstName() const
        {
            return m_FirstName;
        };
        virtual std::string getLastName() const
        {
            return m_LastName;
        };
        virtual char getFirstUnitOfName() const
        {
            return m_FirstUnitOfName;
        };
        virtual void setFirstName(const std::string_view firstName)
        {
            m_FirstName = firstName;
        }
        virtual void setLastName(const std::string_view lastName)
        {
            m_LastName = lastName;
        }
        virtual void setFirstUnitOfName(const char c)
        {
            m_FirstUnitOfName = c;
        }

        [[nodiscard]] virtual bool operator==(const Person &rhs) const
        {
            return (getFirstUnitOfName() == rhs.getFirstUnitOfName() && getFirstName() == rhs.getFirstName() && getLastName() == rhs.getLastName());
        };
        [[nodiscard]] virtual std::strong_ordering operator<=>(const Person &rhs) const
        {
            if (getFirstUnitOfName() != rhs.getFirstUnitOfName())
            {
                return getFirstUnitOfName() <=> rhs.getFirstUnitOfName();
            }
            else
            {
                if (getFirstName() != rhs.getFirstName())
                {
                    return getFirstName() <=> rhs.getFirstName();
                }
                else
                {
                    return getLastName() <=> rhs.getLastName();
                }
            }
        }
        virtual std::string toString() const{
            return std::format("{} {}, First Unit:{}",getFirstName(),getLastName(),
            getFirstUnitOfName());
        }
    };
};