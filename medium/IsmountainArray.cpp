#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        int ans, middle, start = 0, end = n - 1;
        middle = (start + end) / 2;
        if(n>=3){


        
        while (start < end)
        {

            if (arr[middle + 1] > arr[middle]) //{0,5,6,10,1,0}
                                               //{0,1,2,03,4,5}
            {
                start = middle + 1;
            }
            if (arr[middle] > arr[middle + 1])
            {
                end = middle;
            }
            middle = (start + end) / 2;
        }
        
        return start;
        }
        else return -1;
    }
}obj1;

int main()
{
    vector<int> arr ={2,3,4,5,8,9,10};
    int ans = obj1.peakIndexInMountainArray(arr);
    cout<<" the index position of peak of mountain is : "<<ans;
}