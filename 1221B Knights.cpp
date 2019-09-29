#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    char c;
    for(int i=0;i<n;i++){
        if(i%2==0) c='W';
        else c='B';
        for(int j=0;j<n;j++){
            cout<<c;
            if(c=='B') c='W';
            else c='B';
        }
        cout<<endl;
    }
}
