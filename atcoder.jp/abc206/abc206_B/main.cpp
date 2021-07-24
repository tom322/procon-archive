#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 0; i < 2000000000; i++)
    {
        ans += i;
        if (ans >= n) {
            cout << i << endl;
            return 0;
        }
    }
    
}