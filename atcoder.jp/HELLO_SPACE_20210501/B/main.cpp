#include<iostream>
using namespace std;
int main(){
    double N, D, H, d, h, tgt, mintgt;
    cin >> N >> D >> H;
    mintgt = 1e9;
    
    for (int i = 0; i < N; i++)
    {
        cin >> d >> h;
        tgt = (H - h) / (D - d);
        if (mintgt > tgt) mintgt = tgt;
    }
    
    double ans = max((double)0, H - mintgt * D);
    cout << ans << endl;
}