#include<iostream>
//#include<math.h>
#include <stdio.h>
using namespace std;
//double floor2 (double dIn, int precision);

int main(){
    int a, b, d, r;
    double ad, bd, f;
    cin >> a >> b;
    //a = 12300;
    //b = 99;

    ad = a;
    bd = b;
    d = a/b;
    r = a%b;
    f = ad/bd;
    //f = floor2(f,9);
    //cout << d << " " << r << " " << f << endl;
    printf("%d %d %.8f\n",(a/b),(a%b),(ad/bd));
}

/*
double floor2 (double dIn, int precision){
    double dOut;
    dOut = dIn * pow(10, -precision);
    dOut = (double)(int)(dOut);
    return dOut * pow(10.0, precision);
}
*/