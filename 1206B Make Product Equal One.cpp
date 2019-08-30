#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    long long a[x],s=0,zero=0,p=0,n=0;
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        if(a[i]>0) {s=s+abs(a[i]-1);p++; /*cout<<s<<endl;*/}
        else if(a[i]<0) {s=s+(abs(a[i]+1));n++; /*cout<<s<<endl;*/}
        else zero++;
    }
    //cout<<s<<endl;
    if(n%2==0) cout<<s+zero;
    else{
        if(zero>0) cout<<s+zero;
        else cout<<s+2;
    }
}
