#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int x, y, z;
    cin >> x >> y;

    if (x == y) {
        z = x;
        cout << z << endl;
    } else if ((x == 0 && y == 1) || (x == 1 && y == 0)) {
        cout << "2" << endl;
    } else if ((x == 0 && y == 2) || (x == 2 && y == 0))
    {
        cout << "1" << endl;
    } else if ((x == 1 && y == 2) || (x == 2 && y == 1))
    {
        cout << "0" << endl;
    }
    
}