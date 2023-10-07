#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> MakeZeros(vector<vector<int>> arr)
    {
        vector<int> x = {};
        vector<int> y = {};
for(int i=0;i<arr.size()){
    for(int j=i;j<arr.size();j++){
        if(arr[i][j]==0){
x[i]=1;
y[j]=1;
}
for(int i=0;i<arr.size();++i){
    if(x[i]!=1){
        
    }
}


        }
    }
}

        return arr;
    }

} obj1;

int main()
{

    vector<vector<int>> ans;
    vector<vector<int>> arr = {{1, 0, 3}, {2, 1, 5}, {0, 2, 8}};

    ans = obj1.MakeZeros(arr);
}