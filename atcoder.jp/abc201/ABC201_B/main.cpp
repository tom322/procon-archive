#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    string s[N];
    int t[N];
    int u[N];
    // int max = 0;
    // int ans = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> s[i];
        cin >> t[i];
        u[i] = t[i];
    }
    
    sort(u, u + N);
    // cout << t[N-3] << endl;
    // cout << t[N-2] << endl;
    // cout << t[N-1] << endl;

    for (int i = 0; i < N; i++)
    {
        // cout << u[i] << endl;
        if(u[N-3] < t[i] && t[i] < u[N-1]) {
            cout << s[i] << endl;
            break;
        }
    }
}