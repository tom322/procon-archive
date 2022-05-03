#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int price = 0;

    for (int i = 0; i <= n; i++) {
        price = i * 1.08;
        if (price == n) {
            cout << i << endl;
            return 0;

        }
    }

    // cout << price << endl;

    cout << ":(" << endl;

}