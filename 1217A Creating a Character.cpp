#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define mx
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll s,i,e;
        cin>>s>>i>>e;
        ll m=s+e;
       // cout<<m<<" "<<s<<" "<<i<<endl;
        if(m<=i) cout<<0<<endl;
        else if(i+e<s) cout<<e+1<<endl;
        else{
            //if(s>i){
                if(e==0) cout<<1<<endl;
                else{
                    ll n=m-i;
                    if(n%2==0) cout<<n/2<<endl;
                    else cout<<n/2 +1<<endl;
                }
            //}
            }
        }
    }
