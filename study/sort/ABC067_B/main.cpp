#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, K;
    cin >> N >> K;

    int s[N];
    for(int i = 0; i < N; i++) cin >> s[i];

    sort(s, s + N, greater<int>());

    int ans = 0;
    for (int i = 0; i < K; i++)
    {
        ans += s[i];
    }
    
    cout << ans << endl;
}