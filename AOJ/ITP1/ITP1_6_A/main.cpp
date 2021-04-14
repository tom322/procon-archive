#include<iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    //n = 5;
    vector<int> mat(n);
    //mat = {1,2,3,4,5};

    for (int i = 0; i < n; i++){
        cin >> mat.at(i);
    }

    for (int j = n - 1; j > -1; j--){
        if (j != 0) {
            cout << mat[j] << " ";
        } else {
            cout << mat[j] << endl;
        }
    }
}