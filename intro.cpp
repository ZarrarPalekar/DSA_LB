#include <iostream>
using namespace std;

string returnString(int num)
{
    return num == 1 ? " byte" : " bytes";
}

int main()
{
    int a = 5;
    float b = 5.5;
    char c = 'a';
    string d = "Hello";
    bool e = true;

    /**
     * The sizeof is a keyword, but it is a compile-time operator
     * that determines the size, in bytes, of a variable or data type.
     *
     */

    cout << "Size of char: " << sizeof(char) << returnString(sizeof(char)) << endl;
    cout << "Size of int: " << sizeof(int) << returnString(sizeof(int)) << endl;
    cout << "Size of short int: " << sizeof(short int) << returnString(sizeof(short int)) << endl;
    cout << "Size of long int: " << sizeof(long int) << returnString(sizeof(long int)) << endl;
    cout << "Size of float: " << sizeof(float) << returnString(sizeof(float)) << endl;
    cout << "Size of double: " << sizeof(double) << returnString(sizeof(double)) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << returnString(sizeof(wchar_t)) << endl;
    cout << "Size of bool: " << sizeof(bool) << returnString(sizeof(bool)) << endl;
}
