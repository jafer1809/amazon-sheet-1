#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    cout<<"o(n)";
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            cout<<a[i]<<endl;
            break;
        }
    }
    cout<<"log(n)";
    int s=0;
    int l=n;
    while(s<=l){
        //cout<<s<<" "<<l<<endl;
        int m=(s+l)/2;
        if(m+1<n && a[m]>a[m+1] && m-1>-1 && a[m]>a[m-1])
        {
            cout<<endl<<a[m];
            break;
        }
        else if(a[m+1]>a[m]){
            s=m+1;
        }
        else
        l=m-1;
    }


}