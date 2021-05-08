#include<iostream>
using namespace std;
int main(){
    string S;
    cin >> S;

    int p = 700;

    if (S[0] == 'o') p += 100;
    if (S[1] == 'o') p += 100;
    if (S[2] == 'o') p += 100;

    cout << p << endl;
}