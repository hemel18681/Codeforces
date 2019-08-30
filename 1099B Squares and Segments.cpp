#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,s=0;
    cin>>x;
    long long ans=sqrt(x);
    long long res=ans;
    if(ans*res<x) ans++;
    if(ans*res<x) res++;
    cout<<ans+res;
}
