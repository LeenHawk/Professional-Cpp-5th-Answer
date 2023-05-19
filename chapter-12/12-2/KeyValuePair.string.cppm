export module KeyValuePair:string;

import <algorithm>;
import <string>;
import :main;

export template <>
class KeyValuePair<const char*,const char*>{
    public:
        KeyValuePair(const char* key,const char* value):m_key{key},m_value{value}{};
        const std::string& getKey() const{
            return m_key;
        };
        void setKey(const char* key){
            m_key=key;
        };
        const std::string& getValue() const{
            return m_value;
        };
        void setValue(const char* value){
            m_value=value;
        };
    private:
        std::string m_key;
        std::string m_value;
};