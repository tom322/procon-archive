#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int N;
    cin >> N;
    
    double T,A;
    cin >> T >> A;

    double H[N],temp[N],ans[N];
    double min = 1e9;
    double an = -1;
    for (int i = 0; i < N; i++)
    {
        cin >> H[i];
        temp[i] = T - H[i] * 0.006;
        ans[i] = fabs(A-temp[i]); 
        // cout << ans[i] << endl;
        if (min > ans[i]){
            min = ans[i];
            an = i;
        }
    }
    
    cout << an + 1 << endl;
    // cout << min_element(ans, ans + N) - ans + 1 << endl;
}