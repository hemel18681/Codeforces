#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll vis[1000007];
ll dis[1000007];
int main()
{
    ll x;
    cin>>x;
    ll n;
    vector<ll> v;
    for(int i=0;i<x;i++){ cin>>n; v.push_back(n);}
    for(int i=0;i<x;i++) v.push_back(v[i]);
    for(int i=0;i<2*x;i++){
        ll p=i+1;
        if(vis[v[i]]){
            ll d=p-vis[v[i]]-1;
            dis[v[i]]=max(dis[v[i]],d);
        }
        vis[v[i]]=p;
    }
    ll ans=x;
    ll mi=x*2;
    for(int i=0;i<x;i++) mi=min(mi,dis[v[i]]);
    cout<<ans+mi<<endl;
}
