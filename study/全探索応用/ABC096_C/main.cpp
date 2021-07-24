#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int l = 0;
    int lp = 0;
    int s = 1000000;
    int sp = 0;
    long long ans = 0;

    if (l < x) l = x, lp = a;
    if (l < y) l = y, lp = b;
    if (s > x) s = x, sp = a;
    if (s > y) s = y, sp = b;

    ans = a * x + b * y;
    if (ans > l * c * 2) ans = l * c * 2;
    if (ans > s * c * 2 + (l - s) * lp) ans = s * c * 2 + (l - s) * lp;
    
    cout << ans << endl;
}