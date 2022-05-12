#include <iostream>
using namespace std;

int getLength(char arr[])
{
    int length = 0;
    int index = 0;
    while (arr[index] != '\0')
    {
        length++;
        index++;
    }
    return length;
}

int main()
{
    char name[10];

    cin >> name;

    cout << getLength(name) << endl;

    return 0;
}
