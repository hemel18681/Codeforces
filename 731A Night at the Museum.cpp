#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum=0;
    sum=sum+min(26-abs(s[0]-'a'),abs(s[0]-'a'));
    for(int i=1;i<s.length();i++)
    {
        sum=sum+min(26-abs(s[i]-s[i-1])%26,abs(s[i]-s[i-1])%26);
    }
    cout<<sum;
}
