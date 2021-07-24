#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    double t[n], l[n], r[n];
    for(int i = 0; i < n; i++) {
        cin >> t[i] >> l[i] >> r[i];
        
        if (t[i] == 2)
        {
            r[i] -= 0.5;
        } else if (t[i] == 3)
        {
            l[i] += 0.5;
        } else if (t[i] == 4)
        {
            l[i] += 0.5;
            r[i] -= 0.5;
        }
        
    }

    int ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
           ans += max(l[i],l[j]) <= min(r[i],r[j]); 
           cout << ans << endl;
        }
        
    }
    
    // cout << ans << endl;
}   