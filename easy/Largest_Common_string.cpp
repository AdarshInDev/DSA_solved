//  Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

// Input: strs = ["flower","flow","flight"]
// Output: "fl"

// Input: strs = ["dog","racecar","car"]
// Output: ""
// Explanation: There is no common prefix among the input strings.

#include <bits/stdc++.h>
#include <iostream>

using namespace std;
class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string temp = "";
        if (n == 0)
        {
            return temp;
        }
        string a = strs[0];
        string b = strs[n - 1];

        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == b[i])
                temp += a[i];
        }

        return temp;
    }
} obj1;

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    obj1.longestCommonPrefix(strs);
    
    return 0;
}