#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution{
    public :
        int searchInsert(vector<int> & nums, int target){
            int ans;
bool flag = false;
int n = nums.size();
for (int i = 0; i < n; i++)
{
    if (nums[i] == target)
    {
        ans = i;
        flag = true;
    }
}
if (flag == false)
{
    ans = 1;
}

if (target > nums[n - 1])
{
    ans = n;
}

return ans;
}
}obj1;

int main(){

vector<int> arr={1,2,3,6,7,8};
int target ,ans;
cout<<"enter the element you want to find :";
cin>>target;

ans = obj1.searchInsert(arr,target);
cout<<endl<<"Index is :" <<ans;

}