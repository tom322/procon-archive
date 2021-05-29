
#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, t;
    cin >> N;

    t = N * 3;

    int a[t];
    for(int i = 0; i < t; i++) cin >> a[i];

    sort(a, a + t, greater<int>());
    // for (int i = 0; i < N*3; i++)
    // {
    //     cout << a[i] << endl;
    // }
    
    long long ans = 0;
    for (int i = 1; i < t; i+=2)
    {
        ans += a[i];
        // cout << a[i] << endl;
        // cout << i << endl;
        t -= 1;
    }
    
    cout << ans << endl;
}