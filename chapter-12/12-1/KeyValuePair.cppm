export module KeyValuePair;

import std;

export template <typename Key,typename Value>
class KeyValuePair{
    public:
        KeyValuePair(const Key key,const Value value):m_key{std::move(key)},m_value{std::move(value)}{};
        const Key& getKey() const{
            return m_key;
        };
        void setKey(const Key key){
            m_key=std::move(key);
        };
        const Value& getValue() const{
            return m_value;
        };
        void setValue(const Value value){
            m_value=std::move(value);
        };
    private:
        Key m_key;
        Value m_value;
};