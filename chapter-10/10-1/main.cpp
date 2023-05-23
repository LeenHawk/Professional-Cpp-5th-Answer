import std;
import hr;
using namespace std;
using namespace HR;
void compareTwoPerson(const Person& one,const Person& two){
    if(one==two){
        cout<<"Equal\n";
    }else if(one>two){
        cout<<"Bigger\n";
    }
    else{
        cout<<"Less\n";
    }
}
int main(){
    Person testman("Test","Man");
    Person testman1("Test","Man");
    compareTwoPerson(testman,testman1);
    testman.setFirstName("Man");
    testman.setLastName("Test");
    testman.setFirstUnitOfName('T');
    compareTwoPerson(testman,testman1);
    std::swap(testman,testman1);
    compareTwoPerson(testman,testman1);
    Manager testmana("Test","Mana",1);    
}