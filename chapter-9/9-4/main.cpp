import std;
import person;
using namespace std;

int main(){
    Person testman("Test","Man");
    cout<<format("The man's firstname is {},lastname is {},first unit is {}.\n",testman.getFirstName(),testman.getLastName(),testman.getFirstUnitOfName());
    testman.setFirstName("Man");
    testman.setLastName("Test");
    testman.setFirstUnitOfName('T');
    cout<<format("The man's firstname is {},lastname is {},first unit is {}.\n",testman.getFirstName(),testman.getLastName(),testman.getFirstUnitOfName());
}