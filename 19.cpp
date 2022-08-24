#include<bits/stdc++.h>
using namespace std;
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
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        s.push(i);
    }
    while(s.size()>1)
    {
        int c=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(a[c][b]==1)
        {
            s.push(b);
        }
        else
        s.push(c);
    }
    cout<<s.top();
}