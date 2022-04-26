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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    reverseArray(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}