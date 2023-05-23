import std;
using namespace std;

int main(){
    string s1,s2;

    cout << format("Please input a string:\n");
    getline(cin,s1);

    cout << format("Please input another string:\n");
    getline(cin,s2);

    cout << format("Output in alphabetical order:\n");
	if (is_lt(s1 <=> s2)) {
		cout << s1 << endl << s2 << endl;
	} else {
		cout << s2 << endl << s1 << endl;
	}
}