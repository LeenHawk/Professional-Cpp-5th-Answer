import std;
import KeyValuePair;
using namespace std;
int main(){
    KeyValuePair<int,double> nums{123,3.1415};
    cout<<format("{},{}\n",nums.getKey(),nums.getValue());
    nums.setKey(321);
    nums.setValue(2.718);
    cout<<format("{},{}\n",nums.getKey(),nums.getValue());
}