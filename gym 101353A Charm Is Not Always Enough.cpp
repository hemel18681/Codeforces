#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        ll a[x],s=0;
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
            if(a[i]%y!=0) s=s+abs(y-(a[i]%y));
    }
     cout<<s<<endl;
}
}
