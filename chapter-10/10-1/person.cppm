export module person;

import <string>;
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

        virtual [[nodiscard]] bool operator==(const Person &rhs) const
        {
            return (m_FirstUnitOfName == rhs.getFirstUnitOfName() && m_FirstName == rhs.getFirstName() && m_LastName == rhs.getLastName());
        };
        virtual [[nodiscard]] std::strong_ordering operator<=>(const Person &rhs) const
        {
            if (m_FirstUnitOfName != rhs.getFirstUnitOfName())
            {
                return m_FirstUnitOfName <=> rhs.getFirstUnitOfName();
            }
            else
            {
                if (m_FirstName != rhs.getFirstName())
                {
                    return m_FirstName <=> rhs.getFirstName();
                }
                else
                {
                    return m_LastName <=> rhs.getLastName();
                }
            }
        }
    };
};