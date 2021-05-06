#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if ((a * 100 + b * 10 + c) % 4 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;

    // cout << ((a * 100 + b * 10 + c) % 4 == 0 ? "YES" : "NO") << endl;

    // 以下のアルゴでも解けるけど無駄に難しくしている。
    // string rgb;
    // int num;

    // for (int i = 0; i < 3; i++) cin >> rgb[i];

    // num = atoi(rgb.c_str());

    // if (num % 4 == 0) cout << "YES" << endl;
    // else cout << "NO" << endl;

    return 0;
}