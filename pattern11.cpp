#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    int star=0;
    for(int i=1;i<=2*n-1;i++)
    {
      star=i;
      if(i>n) star=2*n-i;
      for(int j=1;j<=star;j++)
      {
        cout<<"*";
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