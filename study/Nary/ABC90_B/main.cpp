#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int A, B;
    cin >> A >> B;

    int ans = 0;
    for (int i = A; i < B + 1; i++)
    {
        // string a = to_string(i);
        // string b = to_string(i);
        // reverse(b.begin(), b.end());
        int j = i % 10, k = i / 10000 % 10;
        int l = i / 10 % 10, m = i / 1000 % 10;

        if (j == k && l == m) ans++;
    }
    
    cout << ans << endl;
}