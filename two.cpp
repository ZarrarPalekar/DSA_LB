#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a num: ";
    cin >> num;
    switch (num)
    {
    case 7:
        cout << "I am in case " << num << endl;
        break;

    default:
        cout << "I am in default case " << num << endl;
        break;
    }
}