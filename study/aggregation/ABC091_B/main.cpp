#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int m;
    cin >> m;
    string t[m];
    for(int i = 0; i < m; i++) cin >> t[i];

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int yen = 0;
        for(int j = 0; j < n; j++) if (s[i] == s[j]) yen++;
        for(int k = 0; k < m; k++) if (s[i] == t[k]) yen--;
        ans = max(ans, yen);
    }
    
    cout << ans << endl;
}