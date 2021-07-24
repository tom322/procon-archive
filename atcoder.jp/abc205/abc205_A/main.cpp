#include<iostream>
#include <iomanip>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    double a, b, c, ans;
    cin >> a >> b;

    if (a == 0) {
        cout << "0" << endl;
        return 0;
    }

    c = a / 100;    
    ans = c * b;

    cout << fixed;
    cout << setprecision(7) << ans << endl;
}