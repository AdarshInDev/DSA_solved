#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int climbStairs(int n)
    {

        vector<int> dp(n + 2, 0);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
} obj1;

int main()
{

    int n, ans;
    cout << "Enter the number of steps: " << endl;

    cin >> n;
    ans = obj1.climbStairs(n);

    cout << "The number of ways to climb the stairs is: " << ans << endl;
}