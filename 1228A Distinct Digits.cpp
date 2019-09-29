#include<bits/stdc++.h>
using namespace std;


int m[1000];


int main()
{
int x, y; cin>>x>>y;
for(int i=x;i<=y;i++)
{
    memset(m,0,1000);
    int t=i,cn=0,a;
    while(t>0)
    {
        a=t%10;
        t=t/10;
        if(m[a]<1) m[a]++;
        else {cn=1;break;}
    }
    if(cn==0) {
            cout<<i;
            return 0;
    }
}
cout<<-1<<endl;
}
