#include<iostream>
using namespace std;
int main(){
    int N, Q;
    string S, A, B;
    int mrx[Q][3];
    cin >> N >> S >> Q;

    for (int i = 0; i < Q; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mrx[i][j];
        }
    }

    for (int i = 0; i < Q; i++)
    {
        if (mrx[i][0] == 1){
            A = S.substr(mrx[i][1],1);
            B = S.substr(mrx[i][2],1);
            S.replace(mrx[i][2]+1,1,A);
            S.replace(mrx[i][1]+1,1,B);
            A = "";
            B = "";
        } else {
            A = S.substr(0,N);
            B = S.substr(N + 1,N);
            S.replace(N + 1, N, A);
            S.replace(0, N, B);
            A = "";
            B = "";
        }
    }
}