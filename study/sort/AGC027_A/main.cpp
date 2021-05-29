#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, x;
    cin >> N >> x;

    int a[N];
    for(int i = 0; i < N; i++) cin >> a[i];

    sort(a, a + N);

    int ans = 0;
    for(int i = 0; i < N; i++) {
        x -= a[i];
        if((x >= 0 && i != N - 1) || x == 0 && i == N - 1) ans++;
        else break;
    }

    cout << ans << endl;
}