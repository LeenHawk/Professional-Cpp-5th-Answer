import std;
import hr;
using namespace std;

int main()
{
    vector<unique_ptr<HR::Person>> persons;
    persons.push_back(make_unique<HR::Employee>("John", "Doe",123));
    persons.push_back(make_unique<HR::Manager>("Otis", "Lowe",456));
    persons.push_back(make_unique<HR::Director>("Fran", "Stone",46));
    persons.push_back(make_unique<HR::Employee>("Harper", "Jones",33));

    for (const auto &person : persons)
    {
        cout << person->toString() << endl;
    }
}