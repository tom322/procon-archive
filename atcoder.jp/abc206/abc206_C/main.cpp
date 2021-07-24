#include<iostream>
#include<algorithm>
#include <stdlib.h>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);
    int num[300000][2] = {{}};
    int x = 0;
    num[0][0] = a[0];
    for (int i = 1; i < n + 1; i++)
    {
        if (num[x][0] == a[i]) {
            num[x][1]++;
        } else
        {
            x++;
            num[x][0] = a[i];
            num[x][1]++;
        }
    }

    int ans = 0;
    for (int i = 0; i < 300000; i++)
    {
        if (num[i][1] == 0) break;
        for (int j = i + 1; j < 300000; j++)
        {
            if (num[j][1] == 0) break;
            else ans += num[i][1]*num[j][1];
        }
        
    }
    
    // sort(a, a + n);
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout << a[i] << endl;
        
    // // }
    // int ans = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n + 1; j++)
    //     {
    //         if (a[i] < a[j]) ans++;
    //     }
        
    // }
    
    cout << ans << endl;
}