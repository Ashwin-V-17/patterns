#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=0;i<n;i++)
   {
      for(int j=0;j<n-i;j++)//spaces
      {
        cout<<" ";
      }
    //stars
    for(int j=0;j<2*i+1;j++)
    {
        cout<<"*";
    }
    //spaces
    for(int j=0;j<n-i;j++)//spaces
      {
        cout<<" ";
      }
      cout<<endl;
   } 
    for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*n-2*i)+1;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
     }
}
int main()
{
    int n;
    cin>>n;
    print(n);
}