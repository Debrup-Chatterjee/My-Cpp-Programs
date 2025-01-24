#include<iostream>
using namespace std;
int main()
{
     int n=0,i=0,c=0;
     cout<<"Enter the value of N: ";
     cin>>n;
     int arr[n];
     int dig[]={0,0,0};
     cout<<"Enter "<<n<<" risk amounts in 0,1 or 2:\n";
     for(i=0;i<n;i++)
     {
          cin>>arr[i];
          c=arr[i];
          dig[c]++;
     }
     c=0;
     for(i=0;i<n;)
     {
          if(dig[c]==0)
          {
               c++;
               continue;
          }
          else
          {
               arr[i]=c;
               dig[c]--;
               i++;
          }
     }
     cout<<"Output:\n";
     for(i=0;i<n;i++)
     cout<<arr[i]<<",";
}