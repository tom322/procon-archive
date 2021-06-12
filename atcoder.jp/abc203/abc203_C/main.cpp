#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;

    long long a[n];
    long long b[n];
    long long c[1000000] = {};
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i], c[a[i]] += b[i];

    long long ans = 0;
    for (long long i = 1; i <= k; i++)
    {
        ans++;
        if (c[i] != 0 && i <= 999999) k += c[i];
    }
    
    cout << ans << endl;
}