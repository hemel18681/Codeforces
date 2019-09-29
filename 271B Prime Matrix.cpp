#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> v;
int prime[100015];
void sieve(){
    for(ll p=2;p*p<=100009;p++){
        if(prime[p]==0){
            for(ll i=p*p;i<=100009;i=i+p){
                prime[i]=1;
            }
        }
    }
}
void num(){
    for(int i=2;i<=100009;i++){
        if(prime[i]==0) {v.push_back(i);}
    }
}
int main()
{
    sieve();
    num();
    prime[1]=1;
    ll n,m;
    cin>>n>>m;
    vector<ll> ansr[n],ansc[m],tem,res;
    ll a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll p; cin>>p;
            if(prime[p]==0&&p!=1) a[i][j]=-1;
            else a[i][j]=p;
        }
    }
    for(int i=0;i<n;i++){
        ll sum=0;
        for(int j=0;j<m;j++){
            if(a[i][j]!=-1){
                ll pos;
                pos=upper_bound(v.begin(),v.end(),a[i][j])-v.begin();
                ansr[i].push_back(v[pos]-a[i][j]);
            }
        }
        if(ansr[i].size()!=0)
            sum=accumulate(ansr[i].begin(), ansr[i].end(), 0);
        tem.push_back(sum);
    }
    sort(tem.begin(),tem.end());
    res.push_back(tem[0]);
    tem.clear();
    for(int j=0;j<m;j++){
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i][j]!=-1){
                ll pos=upper_bound(v.begin(),v.end(),a[i][j])-v.begin();
                ansc[j].push_back(v[pos]-a[i][j]);
            }
        }
        if(ansc[j].size()!=0)
            sum=accumulate(ansc[j].begin(), ansc[j].end(), 0);
        tem.push_back(sum);
    }
    sort(tem.begin(),tem.end());
    res.push_back(tem[0]);
    sort(res.begin(),res.end());
    cout<<res[0]<<endl;
}
