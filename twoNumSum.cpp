#include <iostream>
#include <vector>
using namespace std;

void twoSum(vector<int> &nums, int target)
{
    for (int num : nums)
    {
        cout << num << endl;
    }
}

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    twoSum(vec, 9);
}