#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, ans = 0;
    cin >> N;

    int c[N];
    for(int i = 0; i < N; i++) cin >> c[i];

    sort(c, c + N);

    for (int i = N - 1; i >= 0; i--)
    {
        ans += c[i];
        i--;
        if(i >= 0) ans -= c[i];
    }
    
    cout << ans << endl;
}