#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x;
    cin>>x;
    ll a[x],e=0,o=0;
    for(int i=0;i<x;i++) {cin>>a[i]; if(a[i]%2==0) e++; else o++;}
    cout<<min(o,e)<<endl;
}
