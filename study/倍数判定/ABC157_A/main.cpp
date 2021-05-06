#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;

    // aをbで割ったときの商＋剰余は (a+b-1)/2 で求められる。
    cout << (N + 2 - 1) / 2 << endl;
    
    // cout << ((N % 2) + (N /2)) << endl;
}