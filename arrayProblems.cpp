#include <iostream>
using namespace std;

// reverse an array

void reverseArray(int arr[], int num)
{
    int i = 0;
    int j = num - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool isPalindrome(int arr[], int num)
{
    int i = 0;
    int j = num - 1;
    while (i < j)
    {
        if (arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 3, 3, 2, 1};
    // reverseArray(arr, 6);

    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i];
    // }

    cout << isPalindrome(arr, sizeof(arr) / sizeof(arr[0]));
    cout << endl;
}