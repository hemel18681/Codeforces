#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    int z=k;
    while(k--){
        if(n%2==0) n=n/2;
        if(n%5==0) n=n/5;
    }
    cout<<n;
    while(z--) cout<<0;
}
