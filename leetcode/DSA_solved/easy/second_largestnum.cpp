#include <bits/stdc++.h>
#include <iostream>
using namespace std;
class SecondMin
{
public:
    int secondvar(vector<int> arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        return arr[n - 2];
    }
} obj1;

int main()
{

    vector<int> arrayinput = {2, 13, 53, 1, 4, 9};
    int ans = obj1.secondvar(arrayinput);
cout<<ans;

}