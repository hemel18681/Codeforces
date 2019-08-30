#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    vector<string> v;
    for(int i=0;i<x;i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    int mi=10e7;
    for(int i=0;i<x;i++)
    {
        int count=0;
        for(int j=0;j<x;j++)
        {
            if(i==j) {}
            else
            {
                string m=v[j];
                while(m!=v[i])
                {
                    char c=m[0];
                    m.erase(0,1);
                    m.push_back(c);
                    count++;
                    if(count>100) {count=10e7; break;}
                }
            }
        }
        if(count<mi) mi=count;
    }
    if(mi>=10e7) cout<<-1;
    else cout<<mi;
}
