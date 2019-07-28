#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    sum=sum+min(26-abs(s[0]-'a'),abs(s[0]-'a'));
    //cout<<abs(s[0]-'a')<<" "<<abs(s[0]-'a')<<endl;
    //cout<<sum<<endl;
    for(int i=1;i<s.length();i++)
    {
        //cout<<26-abs(s[i]-s[i-1])%26<<" "<<abs(s[i]-s[i-1])%26<<endl;
        sum=sum+min(26-abs(s[i]-s[i-1])%26,abs(s[i]-s[i-1])%26);
        //cout<<sum<<endl;
    }
    cout<<sum;
}
