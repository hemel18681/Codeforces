#include<bits/stdc++.h>
using namespace std;
int mark[1000007];
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int a[4*x],c=0,s=0;
        for(int i=0;i<4*x;i++) cin>>a[i];
        sort(a,a+ 4*x);
        long long ans=a[0]*a[4*x -1];
        for(int i=0,j=4*x -1;i<2*x;i=i+2,j=j-2)
        {
            if(a[i]!=a[i+1]) c=1;
            if(a[j]!=a[j-1]) c=1;
            if(a[i]*a[j]!=a[i-1]*a[j+1]&&i!=0) c=1;
            if(a[i]*a[j]!=ans) c=1;
        }
        if(c&1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
