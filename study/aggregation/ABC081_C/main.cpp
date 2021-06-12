#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int num[200001] = {};
    for (int i = 0; i < n; i++) num[a[i]]++;

    int ans = 0, cnt = 0;
    for(int i = 0; i < 200001; i++) if(num[i] > 0) cnt++;

    if (cnt <= k)
    {
        cout << ans << endl;
        return 0;
    }
    
    sort(num, num + 200001, greater<int>());

    for(int i = 0; i < k; i++) ans += num[i];
    ans = n - ans;

    cout << ans << endl;

    // int rep = 0;
    // for(int i = 0; i < 200001; i++) {
    //     if(num[i] > 0) {
    //         ans += num[i];
    //         rep++;
    //         if (rep == cnt - k) {
    //             cout << ans << endl;
    //             return 0;
    //         }
    //     }
    // }
    
}