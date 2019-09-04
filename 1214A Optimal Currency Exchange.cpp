#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,d,e;
    cin>>n>>d>>e;
    while(n>=d||n>=e*5){
        if(n%d<n%(e*5)) n=n-d;
        else n=n-(e*5);
    }
    cout<<n<<endl;
}
