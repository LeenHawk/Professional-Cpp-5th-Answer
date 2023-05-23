import std;
import KeyValuePair;
using namespace std;
int main(){
    KeyValuePair<char,char> chars{'a','b'};
    cout<<format("{},{}\n",chars.getKey(),chars.getValue());
    chars.setKey('c');
    chars.setValue('d');
    cout<<format("{},{}\n",chars.getKey(),chars.getValue());
    KeyValuePair<int,double> nums{123,3.1415};
    cout<<format("{},{}\n",nums.getKey(),nums.getValue());
    nums.setKey(321);
    nums.setValue(2.718);
    cout<<format("{},{}\n",nums.getKey(),nums.getValue());
}