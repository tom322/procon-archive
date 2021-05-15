#include<iostream>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int N;
    // int mn = 1;
    // int mx = 1;
    cin >> N;
    int A[N];

    for(int i = 0; i < N; i++){
        cin >> A[i];

        // if(A[i]<mn) mn=A[i];
        // if(A[i]>mx) mx=A[i];
    }

    // cout << mx - mn << endl;

    sort(A, A + N);

    cout << A[N-1] - A[0] << endl;
}