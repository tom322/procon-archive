#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long n;
    cin >> n;

    int ans = 10000000000;
    for (long long a = 1; a * a <= n; a++){
        if (n%a != 0) continue;
        long long b = n / a;

        int mid = 0;
        mid = max(to_string(a).length(), to_string(b).length());

        if (mid < ans) ans = mid;
    }

    cout << ans << endl;
}