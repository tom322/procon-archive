#include<iostream>
using namespace std;
int main(){
    string S;
    cin >> S;

    S[3] = '8';
    // if (S.substr(0,4) == "2017") S.replace(3, 1, "8");

    cout << S << endl;
}