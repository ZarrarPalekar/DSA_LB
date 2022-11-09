#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 10;
    int copyOfN = n;

    int finalAnswer = 0;
    int iterator = 0;

    while (n != 0)
    {
        int bit = n % 10;
        finalAnswer += (bit * pow(2, iterator));
        iterator++;
        n = n / 10;
    }

    cout << "binary to decimal of " << copyOfN << " is: " << finalAnswer << endl;
}