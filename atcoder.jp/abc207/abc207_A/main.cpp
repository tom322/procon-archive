#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int a, b, c;
    int d[3];
    cin >> d[0] >> d[1] >> d[2];

    sort(d, d + 3);

    cout << d[1]+d[2] << endl;
}