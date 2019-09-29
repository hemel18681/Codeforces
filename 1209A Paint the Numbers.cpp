#include<bits/stdc++.h>
using namespace std;


int m[105];
int n[105];


int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0;i<x;i++){cin>>a[i];}
    int co=0;
    sort(a,a+x);
    for(int i=0;i<x;i++){
        if(m[a[i]]==0){
            for(int j=0;j<x;j++){
                if(a[j]%a[i]==0&&m[a[j]]==0){
                    m[a[j]]=1;
                    if(n[a[i]]==0) {n[a[i]]=1; co++;}
                }
            }
        }
    }
    cout<<co<<endl;
}
