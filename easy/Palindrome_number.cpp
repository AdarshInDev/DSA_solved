#include <bits/stdc++.h>
#include <iostream>

using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int rev = 0;
        while (rev < x) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        return x == rev || x == rev / 10;
    }
} obj1;


int main(){
long int x;
cout<<"Hello input a number to check its palindrome or not :"<<endl;
cin>>x;

bool ans = obj1.isPalindrome(x);

cout<<endl<<ans;
return 0;
}



