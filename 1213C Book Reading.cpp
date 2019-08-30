#include<bits/stdc++.h>
#include<sstream>
#define ll long long
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        if(a<b) cout<<0<<endl;
        else{
        int x[10];
        ll i=1,s=0,k=0;
        while(i<=9)
        {
            x[k]=(b*i)%10;
            //cout<<(b*i)%10<<endl;
            i++;k++;
        }
        for(i=0;i<9;i++) s=s+x[i];
        ll num=a/(b*10);
        s=s*num;
        ll nu=a-(num*b*10);
        //cout<<nu<<endl;
        ll nb=nu/b;
        for(int j=0;j<nb;j++) s=s+x[j];
        cout<<s<<endl;
    }
    }
}
