#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n];
    int ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > 10) ans += a[i] - 10;
    }

    cout << ans << endl;
}