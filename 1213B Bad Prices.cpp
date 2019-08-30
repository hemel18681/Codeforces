#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll x;
        cin>>x;
        ll a[x];
        for(int i=0;i<x;i++) cin>>a[i];
        ll c=0,r=a[x-1];
        for(int i=x-2;i>=0;i--)
        {
            if(a[i]>r) c++;
            else r=a[i];
            //cout<<r<<endl;
        }
        cout<<c<<endl;
    }
}
