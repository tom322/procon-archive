#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;

    if (a > 0 && b == 0)
    {
        cout << "Gold" << endl;
    } if (a == 0 && b > 0)
    {
        cout << "Silver" << endl;
    } else if (a > 0 && b > 0) {
        cout << "Alloy" << endl;
    }
    
    
}