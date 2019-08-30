#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<long long> o,e;
    x=x*2;
    if((((x*(x+1))/2)%2)==0) {cout<<"NO"; return 0;}
    cout<<"YES"<<endl;
    x=x/2;
    for(int i=1;i<=2*x;i+=2) o.push_back(i);
    for(int i=2;i<=2*x;i+=2) e.push_back(i);
    for(int i=0;i<x;i++){
        if(i%2==0) cout<<o[i]<<" ";
        else cout<<e[i]<<" ";
    }
    for(int i=0;i<x;i++){
        if(i%2==1) cout<<o[i]<<" ";
        else cout<<e[i]<<" ";
    }
}
