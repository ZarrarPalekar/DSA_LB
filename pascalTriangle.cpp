#include <iostream>
using namespace std;

int fact(int n)
{
    int ans = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }

    while (n > 1)
    {
        ans = ans * n;
        --n;
    }

    return ans;
}

int ncr(int row, int col)
{
    if (row == 0 || col == 0)
        return 1;

    return fact(row) / (fact(row - col) * fact(col));
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    for (int row = 0; row <= num; row++)
    {
        for (int col = 0; col <= num; col++)
        {
            if (row == 0 && col == 0)
            {
                cout << 1;
                break;
            }

            if (ncr(row, col) != 0)
                cout << ncr(row, col) << " ";
        }
        cout << endl;
    }
}
