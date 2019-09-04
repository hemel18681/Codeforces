#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,m=0,c=0,k=0;
    cin>>x;
    string s;
    cin>>s;
    vector<char> v;
    int j=0;
    for(int i=0;i<x;i++){
            v.push_back(s[i]);
            if(v.size()>1){
                if(v[j]==')'&&v[j-1]=='('){v.pop_back(); v.pop_back(); j=j-2;}
            }
            j++;
        }
        int r=0,l=0;
        for(int i=0;i<v.size();i++){
            if(v[i]=='(') {r++; c++;}
            else l++;
        }
        if(l-r==0&&c<=1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        //cout<<c<<endl;
        //cout<<r<<" "<<l;
}

