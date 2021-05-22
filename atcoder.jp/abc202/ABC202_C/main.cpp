#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    long long A[N], B[N], C[N], D[N];

    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];
    for (int i = 0; i < N; i++) cin >> C[i];
    for (int i = 0; i < N; i++) D[i] = B[C[i]-1];

    long long FA[1000000] = {};
    long long FD[1000000] = {};

    for (int i = 0; i < N; i++) FA[A[i]]++;
    for (int i = 0; i < N; i++) FD[D[i]]++;

    // sort(A, A + N);
    // sort(D, D + N);

    long long ans = 0;
    for (int i = 0; i < 1000000; i++) ans += FA[i] * FD[i];

    // for (int i = 0; i < N; i++)
    // {
    //     for (int j = 0; j < N; j++)
    //     {
    //         if (A[i] < D[j]) break;
    //         if (A[i] == D[j]) ans++;
    //     }
    // }

    cout << ans << endl;
    
}