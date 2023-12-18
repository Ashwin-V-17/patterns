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
       char ch='A';
       int bp=(2*i+1)/2;
       for(int j=1;j<=(2*i+1);j++)
       {
           cout<<ch;
           if(j<=bp) ch++;
           else ch--;
       }
       for(int j=0;j<n-i;j++)//spaces
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