#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flot=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.') flot=1;
    }
    if(flot){
            int h=0,j=0;
            string m;
            for(int i=0;i<s.length();i++)
            {
                if(h==0)
                {
                    if(s[i]=='.') h=1;
                    if(s[i]!='.') m.push_back(s[i]);
                }
                else{
                    j++;
                    m.push_back(s[i]);
                }
            }
            long long p=100;
            for(int i=0;i<j;i++) p=p*10;
            long long x=0;
            stringstream geek(m);
            geek>>x;
            long long gcd=__gcd(x,p);
            long long a=x/gcd;
            long long b=p/gcd;
            cout<<max(a,b);
    }
    else
    {
        long long x=0;
        stringstream geek(s);
        geek>>x;
        long long p=100;
        long long gcd=__gcd(x,p);
        long long a=x/gcd;
        long long b=100/gcd;
        cout<<max(a,b);
    }
}
