#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fast(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

ll ar[999999];
ll co[999999];
ll dp[999999][3];
ll n;

ll ans(ll pos, ll inc){
    if(pos>n) return 0;
    if(dp[pos][inc]!=-1)  return dp[pos][inc];
    ll ret = 1e18+9;
    for(int i=0;i<3;i++){
       if(ar[pos]+i!=ar[pos-1]+inc){
         ret=min(ret,(co[pos]*i)+ans(pos+1,i));
       }
    }
    dp[pos][inc]=ret;
    return ret;
}
int main()
{
    fast();
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<=n;i++){
            for(int j=0;j<3;j++){
                dp[i][j]=-1;
            }
        }
        for(int i=1;i<=n;i++){
            cin>>ar[i]>>co[i];
        }
        cout<<ans(1,0)<<endl;
    }
}
