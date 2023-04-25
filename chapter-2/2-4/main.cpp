import <iostream>;
import <format>;
import <vector>;
import <string>;
using namespace std;

int main()
{
    vector<double> inputList;
    cout << format("Please input float numbers (each by enter button and ended by 0)\n");

    double temp;
    while (1)
    {
        cin >> temp;
        if (temp == 0)
        {
            break;
        }
        inputList.push_back(temp);
    }
    for (auto i : inputList)
    {
        cout << format("|{:<+5.2e}|", i) << format("{:#> 7.7f}|\n", i);
    }
}