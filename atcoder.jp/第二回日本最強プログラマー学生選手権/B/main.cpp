#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    int A[N], B[M];
    /*N = 4;
    M = 4;
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    A[3] = 4;
    B[0] = 1;
    B[1] = 2;
    B[2] = 3;
    B[3] = 4;
    */
    vector<int> v;
    bool b = false;

    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int j = 0; j < M; j++){
        cin >> B[j];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(A[i] == B[j]){
                b = true;
                break;
            }
        }
        if (b == false){
            v.push_back(A[i]);
        }
        b = false;
    }

    for(int j = 0; j < M; j++){
        for(int i = 0; i < N; i++){
            if(B[j] == A[i]){
                b = true;
                break;
            }
        }
        if (b == false){
            v.push_back(B[j]);
        }
        b = false;
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < v.size(); ++i){
        if (i == v.size() - 1){
            cout << v[i] << endl;
        } else {
            cout << v[i] << " ";
        }
    }
}