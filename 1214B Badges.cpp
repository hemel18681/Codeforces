#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll b,g,n;
    cin>>b>>g>>n;
    ll ans =0;
    for(int i=0,j=n;i<=n,j>=0;i++,j--){
        if(i<=b&&j<=g) ans++;
    }
    cout<<ans;
}
