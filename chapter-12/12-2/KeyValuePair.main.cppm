export module KeyValuePair:main;

import <algorithm>;

export template <typename Key,typename Value>
class KeyValuePair{
    public:
        KeyValuePair(const Key key,const Value value):m_key{key},m_value{value}{};
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