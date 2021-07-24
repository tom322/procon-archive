#include<iostream>
#include <iomanip>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;

    double c = 0;

    cout << fixed;
    cout << setprecision(6);
    c = (a-b) / 3 + b;
    cout << c << endl;
}