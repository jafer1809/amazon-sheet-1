#include<bits/stdc++.h>
using namespace std;
 stack<int> st;
 void recur(int a)
 {
    if(st.size()==0)
    {
        st.push(a);
        return;
    }
    int cur=st.top();
    recur(a);
    st.push(cur);
    return;
 }
void reverse_h()
{
    if(st.size()>0)
    {
        recur(st.top());
        return;
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    stack<int> st;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        st.push(a);
    }
    reverse_h();
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}