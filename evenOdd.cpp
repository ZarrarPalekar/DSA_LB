#include <iostream>
using namespace std;

string isEvenOrOdd(int num)
{
    return num % 2 == 0 ? "even" : "odd";
}

int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << isEvenOrOdd(num) << endl;
}