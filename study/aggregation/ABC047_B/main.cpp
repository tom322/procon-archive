#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int w, h, n;
    cin >> w >> h >> n;

    int m[w][h];
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            m[i][j] = 0;
        }
        
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y, a;
        cin >> x >> y >> a;

        if (a == 1)
        {
            for (int j = 0; j < x; j++)
            {
                for (int k = 0; k < h; k++)
                {
                    m[j][k] = 1;
                }
                
            }
            
        } else if (a == 2)
        {
            for (int j = x; j < w; j++)
            {
                for (int k = 0; k < h; k++)
                {
                    m[j][k] = 1;
                }
                
            }
            
        } else if (a == 3)
        {
            for (int j = 0; j < w; j++)
            {
                for (int k = 0; k < y; k++)
                {
                    m[j][k] = 1;
                }
                
            }
            
        } else if (a == 4)
        {
            for (int j = 0; j < w; j++)
            {
                for (int k = y; k < h; k++)
                {
                    m[j][k] = 1;
                }
                
            }
            
        }
        
    }
    
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            if(m[i][j] == 0) ans++;
        }
        
    }
    
    cout << ans << endl;

    // 回答1
    // int w, h, n;
    // cin >> w >> h >> n;

    // int x[n], y[n], a[n];
    // int xs =0, ys = 0, ans = 0;
    // for(int i = 0; i < n; i++) {
    //     cin >> x[i], cin >> y[i], cin >> a[i];

    //     if (a[i] == 1 && x[i] > xs){
    //         xs = x[i];
    //     } else if (a[i] == 2 && x[i] < w)
    //     {
    //         w = x[i];
    //     } else if (a[i] == 3 && y[i] > ys)
    //     {
    //         ys = y[i];
    //     } else if (a[i] == 4 && y[i] < h)
    //     {
    //         h = y[i];
    //     }
    // }

    // if (w < xs || h < ys) cout << ans << endl;
    // else cout << (w - xs) * (h - ys) << endl;
    
}