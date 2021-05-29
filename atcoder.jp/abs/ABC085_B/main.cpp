#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    int d[N];
    for(int i = 0; i < N; i++) cin >> d[i];

    // sort(d, d + N, greater<int>());

    int b[110] = {0};

    for(int i = 0; i < N; i++) b[d[i]]++;

    int ans = 0;
    // int pre = 1000;

    for (int i = 0; i <= 100; i++)
    {
        // if(pre > d[i]) ans++, pre = d[i];
        if(b[i]) ans++;
    }
    
    cout << ans << endl;
}