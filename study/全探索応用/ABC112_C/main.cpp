#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;

    int x[n], y[n], h[n];
    for(int i = 0; i < n; i++) cin >> x[i] >> y[i] >> h[i];

    set<int> st;
    for (int i = 0; i < 101; i++)
    {
        for (int j = 0; j < 101; j++)
        {
            int mh = 1;
            for (int k = 0; k < n; k++)
            {
                if (h[k]) mh = abs(x[k]-i) + abs(y[k]-j) + h[k];
            }
            
            int chk = 1;
            for (int k = 0; k < n; k++)
            {
                if (max(mh - abs(x[k]-i) - abs(y[k]-j), 0) != h[k]) chk = 0;
            }

            if (chk) {
                cout << i << " " << j << " " << mh << endl;
                return 0;
            }

        }
        
    }
    
}