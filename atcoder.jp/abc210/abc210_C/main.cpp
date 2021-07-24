#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include <set>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;

    // int c;
    // string s = "";
    // for(int i = 0; i < n; i++) {
    //     cin >> c;
    //     s += to_string(c);
    // }

    // cout << s << endl;

    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> values;
        for (int j = 0; j < k; j++)
        {
            if (i + k > n) break;
            values.insert(c[i+j]);
        }

        int mid = values.size();
        ans = max(ans, mid);
    }
    
    cout << ans << endl;
}