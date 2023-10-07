#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Solution {


public:

    vector<int>sortColors(vector<int>& nums) {
        int low=0;
        int high =nums.size() - 1;
        int mid=0;
       
        while(mid<=high){
        switch(nums[mid]){
            case 0:
            swap(nums[mid++],nums[low++]);
            break;
            case 1:
            mid++;
            break;
            case 2:
            swap(nums[mid],nums[high--]);
            break;
        }
        
        }
        
            // int low=0;int mid=0;int high=nums.size()-1;
            // while(mid<=high){
            //     if(nums[mid]==0)
            //     {
            //         swap(nums[low],nums[mid]);
            //         low++;
            //         mid++;
            //     }
            //     else if(nums[mid]==1){
            //         mid++;
            //     }
            //     else //(nums[mid]==2)
            //     {
            //         swap(nums[mid],nums[high]);
            //         high--;
                  
            //     }
               
            // }


 return nums;

      }
      
}obj1;


int main(){

vector<int> nums = {2,0,2,1,1,0};

cout<<"the original array is : ";
for(int i=0;i<nums.size();i++){
    cout<< nums[i]<<" ";
}
vector<int> ans = obj1.sortColors(nums);
cout<<endl<<"the sorted array is : ";
for(int i=0;i<nums.size();i++){
    cout<< ans[i]<<" ";
}


}