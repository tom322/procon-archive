#include<iostream>
#include<algorithm>
#include<math.h>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n != 0)
    {
        double s[n];
        double sum = 0;
        double avg = 0;
        double v = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            sum += s[i];
        }

        avg = sum / n;
        
        for (int i = 0; i < n; i++)
        {
            v += pow(s[i]-avg, 2) / n;
        }
        
        cout << fixed;
        cout << setprecision(6);
        cout << sqrtl(v) << endl;
        cin >> n;
    }
}