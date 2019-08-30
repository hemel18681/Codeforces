#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,k,c=0,f=1;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1) c++;
        }
        if(c<k) {cout<<"NO"<<endl;}
        else{
            vector<ll> v;
            for(int i=0;i<n;i++){
                if(k==1&&c%2==1) {v.push_back(n); k--; c--; break;}
                if(k==1&&c%2==0) {f=0; break;}
                if(a[i]%2==1&&k>0) {v.push_back(i+1); k--; c--;} //cout<<i+1<<endl;}
            }
            if(f==0) cout<<"NO"<<endl;
            else{
                    cout<<"YES"<<endl;
                    for(int i=0;i<v.size();i++){
                        cout<<v[i]<<" ";
                    }
                    cout<<endl;
            }
        }
    }
}
