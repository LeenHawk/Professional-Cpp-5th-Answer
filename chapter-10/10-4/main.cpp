import <iostream>;
import hr;
using namespace std;

int main()
{
	HR::Employee employee{ "Carlie", "Dudley", 123 };
	cout << employee.toString() << endl;

	// Promote employee to manager.
	HR::Manager manager{ employee };
	cout << manager.toString() << endl;
}