#include<bits/stdc++.h>
using namespace std;
int mark[5];
int main()
{
    int n,m,su=0;
    cin>>n>>m;
    string s;
    vector<string> v;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    int a[m];
    for(int i=0;i<m;i++) cin>>a[i];
    for(int i=0;i<m;i++){
             memset(mark,0,sizeof(mark));
        for(int j=0;j<n;j++)
        {
            mark[v[j][i] - 'A']++;
            //cout<<mark[v[j][i]]<<endl;
        }
        sort(mark,mark+5);
        su=su+(mark[4]*a[i]);
        //cout<<mark[4]<<endl;
        //cout<<su<<endl;
        memset(mark,0,sizeof(mark));
    }
    cout<<su<<endl;
}
