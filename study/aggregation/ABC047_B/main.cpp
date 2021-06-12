#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int w, h, n;
    cin >> w >> h >> n;

    int x[n], y[n], a[n];
    int xs =0, ys = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        cin >> x[i], cin >> y[i], cin >> a[i];

        if (a[i] == 1 && x[i] > xs){
            xs = x[i];
        } else if (a[i] == 2 && x[i] < w)
        {
            w = x[i];
        } else if (a[i] == 3 && y[i] > ys)
        {
            ys = y[i];
        } else if (a[i] == 4 && y[i] < h)
        {
            h = y[i];
        }
    }

    if (w < xs || h < ys) cout << ans << endl;
    else cout << (w - xs) * (h - ys) << endl;
    
}