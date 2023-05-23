import std;
import person;
using namespace std;

int main(){
    Person testman("Test","Man");

	testman.output(cout);

	ostringstream oss;
	testman.output(oss);

	cout << oss.str() << endl;

	ofstream outFile{ "test.txt" };
	testman.output(outFile);
}