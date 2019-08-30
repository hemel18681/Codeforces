#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,c=0;
    cin>>x;
    long long a[x],g;
    for(int i=0;i<x;i++) cin>>a[i];
    sort(a,a+x);
    g=a[0];
    for(int i=1;i<x;i++) g=__gcd(g,a[i]);
    for(long long i=1;i*i<=g;i++)
    {
        if(g%i==0) c=c+2;
        if(i*i==g) c--;
    }
    cout<<c<<endl;
}
