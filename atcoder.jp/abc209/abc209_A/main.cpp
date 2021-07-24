#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    int ans = 0;
    for (int i = a; i < b + 1; i++)
    {
        ans++;
    }
    
    cout << ans << endl;
}