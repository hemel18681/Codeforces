#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll x;
    cin>>x;
    string s;
    cin>>s;
    ll num=1;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){}
        else num=num*(s[i]-'0');
    }
    cout<<num<<endl;
}
