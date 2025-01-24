#include<iostream>
#include<vector>
using namespace std;
int main()
{
     int n=0,i=0,j=0,c=0,t;
     cout<<"Enter the value of N: ";
     cin>>n;
     vector<int> v;
     cout<<"Enter "<<n<<" risk amounts:\n";
     for(i=0;i<n;i++)
     {
          cin>>j;
          v.push_back(j);
     }
     i=0;
     j=1;
     while(i<n-1)
     {
          if(v[j]<=v[c])
          c=j;
          if(j==n-1)
          {
               t=v[i];
               v[i]=v[c];
               v[c]=t;
               i++;
               j=i+1;
               c=i;
          }
          else
          j++;
     }
     cout<<"Output:\n";
     for(i=0;i<n;i++)
     cout<<v[i]<<",";
}