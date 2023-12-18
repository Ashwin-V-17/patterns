 #include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        int v=2*n;
        for(int j=1;j<=v-2*i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
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