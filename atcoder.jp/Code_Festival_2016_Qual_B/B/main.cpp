#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, a, b;
    string s;
    cin >> n >> a >> b >> s;

    int total_count = 0;
    int international_count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'a' && total_count < a + b) {
            cout << "Yes" << endl;
            total_count += 1;

        } else if (s[i] == 'b' && international_count < b && total_count < a + b) {
            cout << "Yes" << endl;
            international_count += 1;
            total_count += 1;

        } else {
            cout << "No" << endl;

        }

    }

}