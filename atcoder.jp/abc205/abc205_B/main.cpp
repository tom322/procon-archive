#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n;

    int a[2000] = {};
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x-1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] != 1)
        {
            cout << "No" << endl;
            return 0;
        }
        
    }
    
    cout << "Yes" << endl;
}