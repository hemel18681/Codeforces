#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    cin>>n;
    string s;
    cin>>s;
    int st;
    vector<int>a[105];
    for(int i=0;i<n;i++){
        cin>>x>>y;
        st=(s[i]-'0');
        int k=0;
        int f=0,tt=0;
        for(int j=0;j<605;j++){
            a[i].push_back(st);
            if(y+tt*x==j+1){
                //cout<<y+tt*x<<" "<<y<<" "<<tt<<" "<<x<<" "<<st<<endl;
                st^=1;
                tt++;
            }
        }
    }
    //cout<<n<<endl;
    int c=0,ans=0;
    for(int i=0;i<605;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(a[j][i]==1) c++;
            //cout<<a[j][i]<<" ";
        }
        //cout<<endl;
        ans=max(ans,c);
    }
    cout<<ans<<endl;
}
