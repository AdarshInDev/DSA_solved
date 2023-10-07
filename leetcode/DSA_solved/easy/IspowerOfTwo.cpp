#include <iostream>
#include <bits/stdc++.h>
using namespace std;



class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool ans = false;
        if(n==0)
        return false;
        if(n==1) ans=true;
       while(n%2==0)
       {
           n/=2;
           if(n==1){
               ans=true;
           }
       }
       return ans;
    }
}obj1;
int main()
{
int n;
cout<<"Enter the number you want to check :"<<endl;
cin>>n;
bool ans= obj1.isPowerOfTwo(n);

if(ans==1)
cout<< "true";
else
cout<<"false";


}