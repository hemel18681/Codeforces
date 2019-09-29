#include <bits/stdc++.h>
using namespace std;

#define INT_SIZE 32
long long ORsum(long long arr[], long long n)
{
    long long zerocnt[INT_SIZE] = { 0 };

    for (int i = 0; i < INT_SIZE; i++)
        for (int j = 0; j < n; j++){
            if (!(arr[j] & 1 << i)){
                    zerocnt[i] += 1;
                }
        }
    long long ans = 0;
    for (int i = 0; i < INT_SIZE; i++)
    {
        ans += ((pow(2, n) - 1) - (pow(2, zerocnt[i]) - 1)) * pow(2, i);
    }

    return ans;
}


int main()
{
    long long siz;
    cin>>siz;
    long long arr[siz];
    for(int i=0;i<siz;i++){
        cin>>arr[i];
    }
    cout << ORsum(arr, siz);
    return 0;
}
