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

    int ans = 1, cnt = 0;
    bool up = false;
    bool down = false;
    for (int i = 0; i < n - 1; i++)
    {
        if(a[i] == a[i + 1] ){
            continue;
        } else if ((a[i] < a[i + 1] && cnt == 0) || (a[i] < a[i + 1] && up == true)) {
            cnt++;
            up = true;
        } else if ((a[i] > a[i + 1] && cnt == 0) || (a[i] > a[i + 1] && down == true)) {
            cnt++;
            down = true;
        } else {
            cnt = 0;
            up = false;
            down = false;
            ans++;
        }
    }
    
    cout << ans << endl;
}