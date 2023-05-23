import std;
import KeyValuePair;
using namespace std;
int main(){
    KeyValuePair<const char*,const char*> chars{"Hello","World"};
    cout<<format("{},{}\n",chars.getKey(),chars.getValue());
    chars.setKey("World");
    chars.setValue("Hello");
    cout<<format("{},{}\n",chars.getKey(),chars.getValue());
}