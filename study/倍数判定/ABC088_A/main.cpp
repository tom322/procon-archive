#include<iostream>
using namespace std;
int main(){
    int N, A;
    cin >> N >> A;

    if ((N - A) % 500 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}