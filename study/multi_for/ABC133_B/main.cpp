#include<iostream>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int N, D;
    cin >> N >> D;

    int map[N][D];
    for (int i = 0; i < N; i++)
    {
        for (int k = 0; k < D; k++)
        {
            cin >> map[i][k];
        }
        
    }
    
    int cnt = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            double ans = 0;
            for (int k = 0; k < D; k++)
            {
                ans += fabs(map[i][k]-map[j][k])*fabs(map[i][k]-map[j][k]);    
            }
            ans = sqrt(ans);
            if(floor(ans)==ans) cnt++;
            // cout << ans << endl;   
        }
    }

    cout << cnt << endl;
}