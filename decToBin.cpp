#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 1000;
    int copyOfN = n;

    int finalAnswer = 0;
    int iterator = 0;

    while (n != 0)
    {
        int bit = n & 1;
        finalAnswer += (bit * pow(10, iterator));
        iterator++;
        n = n >> 1;
    }

    cout << "decimal to binary of " << copyOfN << " is: " << finalAnswer << endl;
}