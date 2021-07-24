#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long a, b, c;
    cin >> a >> b >> c;

    if (c % 2 == 0) {
        if (fabs(a) > fabs(b)) {
            cout << ">" << endl;
        } else if (fabs(a) < fabs(b))
        {
            cout << "<" << endl;
        } else if (fabs(a) == fabs(b)) {
            cout << "=" << endl;
        }
        
    } else if (c % 2 != 0) {
        if (a > b) {
            cout << ">" << endl;
        } else if (a < b)
        {
            cout << "<" << endl;
        } else if (a == b) {
            cout << "=" << endl;
        }
    }
}