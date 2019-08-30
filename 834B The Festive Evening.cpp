#include<bits/stdc++.h>
using namespace std;
int mark[1000007];
int vis[1000007];
int main()
{
    long long n,k,c=0;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<n;i++) {
            if(mark[s[i]]==0) {mark[s[i]]++; vis[i]=1; c++;}
            else mark[s[i]]++;
    }
    for(int i=n-1;i>=0;i--){
        if(mark[s[i]]>1) {mark[s[i]]=0; vis[i]=-1;}
        else if(mark[s[i]]==1) {mark[s[i]]=0; vis[i]=2;}
    }
    if(k>=c) cout<<"NO";
    else{
        long long ans=0;
        for(int i=0;i<n;i++){
            if(vis[i]==1) ans++;
            if(vis[i]==-1) ans--;
            if(vis[i]==2) {ans++; if(ans>k) {cout<<"YES"; return 0;} ans--; }
            if(ans>k) {cout<<"YES"; return 0;}
        }
        cout<<"NO";
    }
}
