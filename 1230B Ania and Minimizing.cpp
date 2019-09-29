#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;

    string s;
    cin>>s;
    if(a==1&&b==1) {cout<<0; return 0;}
    if(b==0)
        cout<<s;
    else if(s[0]!='1')
    {
        s[0]='1';
        b--;
        for(int m=1;m<a;m++)
        {
            if(s[m]!='0'&&b>0)
            {
                s[m]='0';
                b--;
            }
        }
        int ze=0;
        for(int m=0;m<a;m++)
            {
            if(s[m]!='0')
                ze++;
        }
        vector<char> ve;
        if(ze==0)
            cout<<0;
        else
        {
            for(int i=0;i<a;i++)
            {
                if(s[i]!='0'&&ve.size()==0)
                    ve.push_back(s[i]);
                else if(ve.size()!=0)
                    ve.push_back(s[i]);
            }
            for(int i=0;i<ve.size();i++)
            {
                cout<<ve[i];
            }
        }
    }
    else
        {
        for(int m=1;m<a;m++)
        {
            if(s[m]!='0'&&b>0)
            {
                s[m]='0';
                b--;
            }
        }
        int ze=0;
        for(int i=0;i<a;i++)
            {
            if(s[i]!='0')
                ze++;
        }
        vector<char> ve;
        if(ze==0) cout<<0;
        else
        {
            for(int i=0;i<a;i++)
            {
                if(s[i]!='0'&&ve.size()==0)
                    ve.push_back(s[i]);
                else if(ve.size()!=0)
                    ve.push_back(s[i]);
            }
            for(int m=0;m<ve.size();m++)
            {
                cout<<ve[m];
            }
        }
    }
}
