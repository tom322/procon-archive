#include<iostream>
#include <iomanip>
#include <math.h>
using namespace std;
const double PI = acos(-1);

int main(){
  	double a, b, C, S, L, h;
    cin >> a >> b >> C;
    C *= PI/180;

  	S = ((a*b)/2)*sin(C);
  	L = a + b + sqrtl(pow(a,2)+pow(b,2)-2*a*b*cos(C));
  	h = b*sin(C);
  
  	cout << fixed;
    cout << setprecision(6);
  
    cout << S << endl;
    cout << L << endl;
    cout << h << endl;
}