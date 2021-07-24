#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int p;
    cin >> p;

    int coin[10];
    coin[0] = 1;
    coin[1] = 2;
    coin[2] = 6;
    coin[3] = 24;
    coin[4] = 120;
    coin[5] = 720;
    coin[6] = 5040;
    coin[7] = 40320;
    coin[8] = 362880;
    coin[9] = 3628800;

    int sum = 0;
    int mid = 0;
    int num = 0;
    for (int i = 9; i > -1 ; i--)
    {
        for (int j = 1; j < 101; j++)
        {
            if (p < sum) {
                sum -= mid;
                num--; 
                break;
            } else if (p == sum) {
                cout << num << endl;
                return 0;
            } else if (p > sum) {
                mid = coin[i];
                sum += mid;
                num++;
            }
        }
        
    }
    
}