#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    int ans = 1000000;
    for (int i = 1; i < N + 1; i++)
    {
        int j = i / 100000 % 10 + i / 10000 % 10 + i / 1000 % 10 + i / 100 % 10 + i / 10 % 10 + i % 10;
        int k = (N - i) / 100000 % 10 + (N - i) / 10000 % 10 + (N - i) / 1000 % 10 + (N - i) / 100 % 10 + (N - i) / 10 % 10 + (N - i) % 10;
        if (ans > (j + k) && j >= 1 && k >= 1) ans = j + k;
    }
    
    cout << ans << endl;
}