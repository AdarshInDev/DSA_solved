#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string kthDistinct(vector<string> &arr, int k)
    {

        bool flags=true;
        vector<string> distinct;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size(); i++)
        {
            for (int j = i+1; j < arr.size(); j++)
            {
                if (arr[i] == arr[j])
                {

flags==false;
break;
                 
                }
            
        }
        if(flags==true)
        {
            
            distinct.push_back(arr[i]);
            cout<<distinct[i]<<endl;
        }
        }
        return distinct[k-1];
    }
} obj1;

int main()
{
    vector<string> arr = {
        "a",
        "b",
        "c",
        "b",
        "c",
        "d",
        "e",
    };
    int k = 2;
    string ans = obj1.kthDistinct(arr, k);
    cout<<ans;
}
