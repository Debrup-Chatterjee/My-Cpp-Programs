#include<iostream>
using namespace std;
int main()
{
     int n=0,a=0,b=0;
     cout<<"Enter a number: ";
     cin>>n;
     a=n;
     while(a!=0)
     {
          b=b*10+(a%10);
          a/=10;
     }
     if(b==n)
     cout<<"It is a Palindrome number";
     else
     cout<<"It is not a Palindrome number";
     return 0;
}