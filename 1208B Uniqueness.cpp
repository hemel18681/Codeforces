#include<bits/stdc++.h>
#define ll long long
using namespace std;
map<long long, long long> m;
map<long long, long long> ma;
int main()
{
    int x,c=0;
    cin>>x;
    ll a[x];
    for(int i=0;i<x;i++)
    {
        cin>>a[i];
        if(m[a[i]]==0)
        {
            m[a[i]]++;
            c++;
        }
        else
        {
            m[a[i]]++;
        }
    }
    if(c==x) {cout<<0; return 0;}
    vector<int> v;
    int n=0;
    for(int i=0;i<x;i++)
    {
        if(ma[a[i]]==0)
        {
            ma[a[i]]++;
            k=i;
        }
        else
        {
            if(m=[a[i+1]]!=1/*&&m[a[i]]!=1*/&&i+1<x)
            {
                n++;
                //v.push_back(n);
                //m[a[i]]--;
            }
            else
            {
                n++;
                //cout<<n<<endl;
                v.push_back(n);
                //n=0;
            }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    cout<<v[0];
}
