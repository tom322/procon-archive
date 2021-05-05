#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    double x[n], y[n], p1, p2, p3, pinf;
    pinf = -10000;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        p1 += fabs(x[i]-y[i]);
        // p2 += pow(fabs(x[i]-y[i]),2);
        // p3 += pow(fabs(x[i]-y[i]),3);
        p2 += fabs(x[i]-y[i])*fabs(x[i]-y[i]);
        p3 += fabs(x[i]-y[i])*fabs(x[i]-y[i])*fabs(x[i]-y[i]);
        // if(pinf < (x[i]-y[i])) pinf = fabs(x[i]-y[i]);
        pinf = max(pinf,fabs(x[i]-y[i]));
    }
    
    cout << fixed;
    cout << setprecision(8);
    
    cout << p1 << endl;
    cout << pow(p2, 1.0/2.0) << endl;
    cout << pow(p3, 1.0/3.0) << endl;
    cout << pinf << endl;
}