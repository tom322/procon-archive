#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    double a, b;
    cin >> a >> b;

    if (a * 6 >= b && a <= b) cout << "Yes" << endl;
    else cout << "No" << endl;
}