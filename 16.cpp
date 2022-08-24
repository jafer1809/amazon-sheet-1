#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
cin>>n;
vector<int> a;
for(int i=0;i<n;i++)
{
    int b;
    cin>>b;
    a.push_back(b);
}
stack<int> s;
for(int i=1;i<n;i++)
{
    if(s.empty())
    {
        s.push(a[i]);
        continue;
    }
    while(!s.empty() && s.top()<a[i])
    {
        cout<<s.top()<<"-"<<a[i]<<endl;
        s.pop();
    }
    s.push(a[i]);
}
while(!s.empty())
{
    cout<<s.top()<<"-"<<"-1"<<endl;
    s.pop();
}
}