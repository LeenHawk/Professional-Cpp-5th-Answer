import <iostream>;

import hr;
using namespace std;
using namespace HR;

int main(){
    Person testman("Test","Man");
    Person testman1("Test","Man");
    cout<<testman.toString();
    cout<<testman1.toString();
    Manager testmana("Test","Mana",1); 
    cout<<testmana.toString();   
}