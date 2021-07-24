#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];
    sort(c, c + n);
    long long ans = 1;

    for (int i = 0; i < n; i++)
    {
        ans = ans * max(0, c[i] - i) % 1000000007;
    }

    cout << ans << endl;
}