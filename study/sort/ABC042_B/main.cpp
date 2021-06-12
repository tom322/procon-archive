#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, L;
    cin >> N >> L;

    string s[N];
    for(int i = 0; i < N; i++) cin >> s[i];

    sort(s, s + N);

    string ans = "";
    for(int i = 0; i < N; i++) ans += s[i];

    cout << ans << endl;
}