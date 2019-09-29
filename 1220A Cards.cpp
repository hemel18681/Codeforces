    #include <bits/stdc++.h>
    #define ll long long
    using namespace std;

    int main()
    {
        int n;
        cin>>n;
        ll a[n][n],ans[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                scanf("%lld",&a[i][j]);
            }
        }
        ans[2]= sqrt((a[0][2]*a[1][2])/a[0][1]);
        //cout<<ans[2]<<endl;
        for(int i=0;i<n;i++){
            if(i!=2)
                ans[i]=a[i][2]/ans[2];
                cout<<a[i][2]<<endl;
        }
        for(int i=0;i<n;i++) cout<<ans[i]<<" ";
    }
