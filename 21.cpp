#include<bits/stdc++.h>
using namespace std;
int ans=0;
int sol(int n,vector<vector<int>> a,int i,int j)
{
    if(i==n-1 && j==n-1)
    return 1;
    if(j+1<n && a[i][j+1]==0)
    ans+=sol(n,a,i,j+1);
    if(i+1<n && a[i+1][j]==0)
    ans+=sol(n,a,i+1,j);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int b;
            cin>>b;
            a[i].push_back(b);
        }
    }
    int l=sol(n,a,0,0);
    cout<<ans;
}