#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int ans = 1;
    while (n > 1)
    {
        ans *= n;
        n--;
    }
    cout << ans << endl;
}