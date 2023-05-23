import std;
using namespace std;

string replace_all(string str, const string &key, const string &newkey)
{
    for (string::size_type pos(0); pos != string::npos; pos += newkey.length())
    {
        if ((pos = str.find(key, pos)) != string::npos)
        {
            str.replace(pos, key.length(), newkey);
        }
        else
        {
            break;
        }
    }
    return str;
}

int main()
{
    string haystack, needle;

    cout << format("Please input the source string:\n");
    getline(cin, haystack);

    cout << format("Please input the key string:\n");
    getline(cin, needle);

    string replacekey;
    cout << format("Please input the replacement of key string:\n");
    getline(cin, replacekey);

    string result = replace_all(haystack, needle, replacekey);

    cout << format("Result:\n");
    cout << result << std::endl;
}