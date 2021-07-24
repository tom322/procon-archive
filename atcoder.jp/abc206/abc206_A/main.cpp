#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, y;
    cin >> n;

    y = 1.08 * n;
    if (206 > y)
    {
        cout << "Yay!" << endl;
    } else if (206 == y)
    {
        cout << "so-so" << endl;
    } else if (206 < y)
    {
        cout << ":(" << endl;
    }
    
}