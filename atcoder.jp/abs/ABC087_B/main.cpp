#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    int ans = 0;

    for (int i = 0; i < A + 1; i++)
    {
        for (int j = 0; j < B + 1; j++)
        {
            for (int k = 0; k < C + 1; k++)
            {
                if ((500*i+100*j+50*k) == X) ans++;
            }
        }
    }
    
    cout << ans << endl;
}