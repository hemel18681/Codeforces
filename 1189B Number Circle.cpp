#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x;
    cin>>x;
    ll a[x];
    for(int i=0;i<x;i++) cin>>a[i];
    sort(a,a+x,greater<int>());
    vector<ll> v1,v2;
    for(int i=0,j=1;i<x;i=i+2,j=j+2){
        v1.push_back(a[i]);
        if(j>=x) break;
        v2.push_back(a[j]);
    }
    sort(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++) v1.push_back(v2[i]);
    for(int i=1;i<x-1;i++){
        if(v1[i]>=v1[i-1]+v1[i+1]) {cout<<"NO"; return 0;}
    }
    if(v1[0]>=v1[1]+v1[x-1]) {cout<<"NO"; return 0;}
    if(v1[x-1]>=v1[0]+v1[x-2]) {cout<<"NO"; return 0;}
    cout<<"YES"<<endl;
    for(int i=0;i<x;i++) cout<<v1[i]<<" ";
}
