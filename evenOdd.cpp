#include <iostream>
using namespace std;

string isEvenOrOdd(int num)
{
    return num % 2 == 0 ? "even" : "odd";
}

int main()
{
    int n = 5;
    cout << isEvenOrOdd(n) << endl;
}