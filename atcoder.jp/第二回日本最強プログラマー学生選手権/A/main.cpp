#include<iostream>
using namespace std;
int main(){
    double X, Y, Z;
    double pt, ps;
    int S;
    cin >> X >> Y >> Z;
    //X = 1000;
    //Y = 1;
    //Z = 1;

    pt = Y / X;
    ps = pt * Z;
    S = ps;

    if (ps == S){
        S = S - 1;
        cout << S << endl;
    } else {
        cout << S << endl;
    }
}