#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
       int len = 0, tail = s.length() - 1;
        while (tail >= 0 && s[tail] == ' ') tail--;
        while (tail >= 0 && s[tail] != ' ') {
            len++;
            tail--;
        }
        return len;
    }
    
} obj1;

int main()
{
string s ="adarsh";
int ans;
    cout<<"the answer is : ";
    ans = obj1.lengthOfLastWord(s);
    cout<<ans;
}
