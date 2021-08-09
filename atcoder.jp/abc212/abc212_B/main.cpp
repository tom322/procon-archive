#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string a;
    cin >> a;

    int x[4];
    x[0] = a[0] - '0';
    x[1] = a[1] - '0';
    x[2] = a[2] - '0';
    x[3] = a[3] - '0';

    if (x[0] == x[1] && x[0] == x[2] && x[0] == x[3]) {
        cout << "Weak" << endl;
    } else if (x[1] == ((x[0] + 1) % 10) && x[2] == ((x[1] + 1) % 10) && x[3] == ((x[2] + 1) % 10))
    {
        cout << "Weak" << endl;
    } else {
        cout << "Strong" << endl;
    }
    
}