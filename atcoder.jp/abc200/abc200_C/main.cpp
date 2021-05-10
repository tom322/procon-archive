#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int N, cnt = 0;
    cin >> N;
    int A[N];
    long long b[200] = {0};
    // long long c[200] = {0};

    // for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        // cout << A[i]%200 << endl;
        b[A[i]%200]++;
        // if (A[i] % 200 == 0) cnt++;
        // cout << b[A[i]%200]++ << endl;
        // cout << c[0]++ << endl;
    }

    long long res = 0;
    for (int i = 0; i < 200; i++){
        // cout << b[i] << endl;
        res += (b[i]*(b[i]-1))/2;
        // cout << (b[i]*(b[i]-1))/2 << endl;
    }
    // int ans = (cnt * cnt - 1) / 2;
    
    cout << res << endl;
}