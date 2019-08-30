#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,c=0;
        cin>>x;
        string s;
        cin>>s;
        for(int i=0;i<x;i++)
        {
            ll j;
            if(s[i]=='.'&&i<x&&(s[i+1]=='.'||i+1==x)&&s[i-1]!='*')
            {
                j=i;
                while(s[i]!='*'&&i<x)
                {
                    i++;
                }
                if(s[i]=='*')
                {
                    //cout<<i<<endl;
                    ll p=i-2;
                    ll m=p-j+1;
                    //cout<<m<<endl;
                    if(m%3==0) c=c+(m/3);
                    else c=c+(m/3)+1;
                }
                if(i==x)
                {
                    //cout<<i<<endl;
                    ll p=i-1;
                    ll m=p-j+1;
                    if(m%3==0) c=c+(m/3);
                    else c=c+(m/3)+1;
                }
            }
            //cout<<i<<endl;
        }
        cout<<c<<endl;
    }
}
