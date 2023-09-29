#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        vector<int> removed;
        int cnt = 0;
        int sizee = nums.size();
        for (int i = 1; i < sizee; i++)
        {

            if (nums[i] == nums[i - 1])
            {

                cnt++;
            }
            else
                nums[i - cnt] = nums[i];
        }

        return sizee-cnt;
    }

} obj1;

int main()
{
    vector<int> arr = {1, 1, 2, 2, 3, 5, 9, 9};
    int n=arr.size();
    cout << "array before removing duplicate items : ";
    for (int i = 0; i <n ; i++)
    {
        cout << arr[i] << " ";
    }
    int ans = obj1.removeDuplicates(arr);
    cout << endl
         << "number of elements removed :" << n-ans << endl;
    cout << "the array after removing duplicate items : ";
    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    }
}