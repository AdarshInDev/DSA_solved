#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string addBinary(string a, string b)
    {
        int blen = b.length();
        int alen = a.length();
        int i = 0;
        int carry = 0;
        string ans = "";

        while (i < alen || i < blen || carry != 0)
        {
            int x = 0;
            if (i < alen && a[alen - i - 1] == '1')
            {
                x = 1;
            }

            int y = 0;
            if (i < blen && b[blen - i - 1] == '1')
            {
                y = 1;
            }
            ans = to_string((x + y + carry) % 2) + ans;
            carry = (x + y + carry) / 2;
            i += 1;
        }

        return ans;
    }
} obj1;

int main()
{

    string a = "11", b = "1";
    string ans = obj1.addBinary(a, b);
    cout << a << " + " << b << " is : " << ans;
}