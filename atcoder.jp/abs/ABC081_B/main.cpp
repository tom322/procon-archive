#include<iostream>
using namespace std;
int main(){
    int N, num = 0;
    cin >> N;
    int A[N];

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    } 

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 != 0) break;
        A[i] = A[i] / 2;

        if (i == N -1)
        {
            num++;
            i = -1;
        }
    }
    
    cout << num << endl;
}