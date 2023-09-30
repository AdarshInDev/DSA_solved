#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> temp;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {
            if (nums[i + 1] == nums[i])
            {
                temp.push_back(nums[i]);
            }
        }
        return temp;
    }
} obj1;
int main()

{

    vector<int> input = {1, 3, 5, 98, 3, 4,2, 1, 5};
    cout << "array is : ";
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    input = obj1.findDuplicates(input);
    cout << endl;
    cout << "duplicate items are :";
    for (int i = 0; i < input.size(); i++)
    {
        cout << input[i] << " ";
    }
}