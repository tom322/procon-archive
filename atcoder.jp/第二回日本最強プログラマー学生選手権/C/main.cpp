#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int A, B, x, y, max;
    //cin >> A >> B;
    A = 2;
    B = 4;
    vector<int> v;

    for (B; B > A + 1; B--){
        for (int j = B - 1; j == A; j--){
            for (int k = j; k == A; k--){
                if (B % k == 0 && j % k == 0){
                    v.push_back(k);
                }
            }
        }
    }

    max = *max_element(v.begin(), v.end());
    cout << max << endl;
}