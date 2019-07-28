#include<bits/stdc++.h>
using namespace std;
long long bigmod ( long long a, long long p, long long m )
{
    long long res = 1;
    long long x = a;
    while ( p )
    {
        if(p&1) res=(res*x)%m;
        x=(x*x)%m;
        p=p>>1;
    }
    return res;
}
int main()
{
    long long x,y;
    cin>>x>>y;
    cout<<bigmod(2,(x+y),998244353);
}
