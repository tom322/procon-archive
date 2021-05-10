#include<iostream>
using namespace std;
int main(){
    int N, A, R;
    cin >> N >> A;

    cout << (N % 500 <= A ? "Yes" : "No") << endl;

    // 以下のアルゴでも解けるが非効率
    // R = N % 500;
    // if (R - A <= 0) cout << "Yes" << endl;
    // else cout << "No" << endl;

    return 0;
}