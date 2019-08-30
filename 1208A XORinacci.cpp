#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<long long, long long> m
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,f=0,p=0;
        cin>>a>>b>>n;
        f=a^b;
        if(n==0) {cout<<a<<endl; p=1;}
        if(n==1) {cout<<b<<endl; p=1;}
        if(p==0)
            {
                if(n%3==0) cout<<a<<endl;
                else if(n%3==2) cout<<f<<endl;
                else cout<<b<<endl;
            }
    }
}
