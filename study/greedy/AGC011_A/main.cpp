#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, c, k;
    cin >> n >> c >> k;

    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    sort(t, t + n);

    int ans = 0;
    for(int i = 0; i < n;) {
        ans++;
        int stt = i;
        while (i < n && t[i] - t[stt] <= k && i - stt < c) i++;
    }

    // int ans = 0;
    // bool chg = 0;
    // int stt = 0;
    // int cnt = 0;
    // for(int i = 0; i < n; i++) {
    //     cnt++;

    //     if (chg == 0) {
    //         chg = 1;
    //         stt = t[i];
    //         ans++;
    //     } 

    //     if (t[i] > stt + k) {
    //         ans++;
    //         cnt = 1;
    //         stt = t[i];
    //         continue;
    //     }

    //     if (cnt == c) {
    //         chg = 0;
    //         cnt = 0;
    //     }
    // }

    cout << ans << endl;
}