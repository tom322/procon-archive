#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int sumE = 0;
    int ansE = 0;
    for (int i = 0; i < n; i++)
    {
        sumE += a[i];
        if (i % 2 != 0){
            if (sumE <= 0)
            {
                sumE += abs(sumE) + 1;
                ansE += abs(sumE) + 1;
            }
        } else {
            if (sumE >= 0) {
                sumE -= abs(sumE) + 1;
                ansE += abs(sumE) + 1;
            }
        }
        
    }

    int sumO = 0;
    int ansO = 0;
    for (int i = 0; i < n; i++)
    {
        sumO += a[i];
        if (i % 2 == 0){
            if (sumO <= 0)
            {
                sumO += abs(sumO) + 1;
                ansO += abs(sumO) + 1;
            }
        } else {
            if (sumO >= 0) {
                sumO -= abs(sumO) + 1;
                ansO += abs(sumO) + 1;
            }
        }

    }
    
    cout << min(ansE,ansO) << endl;
    
    // sum = a[0];
    // for (int i = 1; i < n; i++)
    // {
    //     if (sum > 0)
    //     {
    //         sum += a[i];
    //         if (sum < 0)
    //         {
    //             continue;
    //         } else {
    //             int j = 0;
    //             while (sum < 0)
    //             {
    //                 sum -= j;
    //                 ans++;
    //             }
                
    //         }
            
    //     } else if (sum < 0) {
    //         sum += a[i];
    //         if (sum > 0) {
    //             continue;
    //         } else {
    //             int j = 0;
    //             while (sum > 0)
    //             {
    //                 sum += j;
    //                 ans++;
    //             }
                
    //         }
    //     }
    // }
    
    // cout << ans << endl;
}