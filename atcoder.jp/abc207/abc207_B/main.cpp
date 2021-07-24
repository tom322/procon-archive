#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    for (int i = 0; i < 1000000; i++)
    {
        if (a + b * i <= c * i * d)
        {
            cout << i << endl;
            return 0;
        } else if (b >= c * d)
        {
            cout << "-1" << endl;
            return 0;
        }
        
        
    }
    
}