#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long n, k, l, m;
    cin >> n >> k;

    long long a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) b[i] = a[i];
    sort(b, b + n);

    l = 0;
    l = k % n;
    int mid = b[l - 1];
    m = 0;
    m = k / n;

    for (int i = 0; i < n; i++)
    {
        if (l > 0)
        {
            if (mid >= a[i]) cout << m + 1 << endl;
            else cout << m << endl;
        } else if (l <= 0)
        {
            cout << m << endl;
        }
    }
    
}