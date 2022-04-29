#include <iostream>
using namespace std;
 
int main()
{
    int    num;
    cout << "Enter a number: ";
    cin >> num; 
 
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // 1
    // for (int row = 1; row <= n; row++)
    // {
    //     for (int col = 1; col <= n; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //  *
    //  * *
    //  * * *
    //  * * * *
    //  * * * * *
    // 2
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * * * * *
    // * * * *
    // * * *
    // * *
    // *
    // 3
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= num - row + 1; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //         *
    //       * *
    //     * * *
    //   * * * *
    // * * * * *
    // 4
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= num - row; col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // * * * * *
    //   * * * *
    //     * * *
    //       * *
    //         *
    // 5
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= row - 1; col++)
    //     {
    //         cout << "  ";
    //     }

    //     for (int col = 1; col <= num - row + 1; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *
    // 6
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= num - row; col++)
    //     {
    //         cout << " ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // // test commit

    // for (int row = 1; row <= num - 1; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= num - row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // 7
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= num - row; col++)
    //     {
    //         cout << " ";
    //     }

    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    //  * * * * *
    //   * * * *
    //    * * *
    //     * *
    //      *
    // 8
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= row; col++)
    //     {
    //         cout << " ";
    //     }
    //     for (int col = 1; col <= num - row + 1; col++)
    //     {
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }

    // 9 hollow pyramid (not working)
    // for (int row = 1; row <= num; row++)
    // {
    //     for (int col = 1; col <= num; col++)
    //     {
    //         if (row == num)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     for (int col = 1; col <= num; col++)
    //     {

    //         if (row == 1)
    //         {
    //             cout << "    *    ";
    //             break;
    //         }
    //     }
    //     cout << endl;
    //     for (int col = 1; col <= num + 4; col++)
    //     {

    //         cout << " *";
    //     }

    //     cout << endl;
    // }
}