#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;

    int ans = 0;
    while (N > 0)
    {
        N /= K;
        ans++;
    }
    
    cout << ans << endl;

    // int res = 0;
    // string ans = "";
    // while (N > 0)
    // {
    //     res = N % K;
    //     ans += to_string(res);
    //     N /= K;
    // }
    
    // reverse(ans.begin(), ans.end());
    // cout << ans.length() << endl;
}