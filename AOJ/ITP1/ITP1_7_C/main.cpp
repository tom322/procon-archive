#include<iostream>
using namespace std;
int main(){
    int r, c, rs, cs;
    cin >> r >> c;
    int m[r+1][c+1];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c+1; j++)
        {
            if (j == c){
                m[i][j] = rs;
                cout << m[i][j] << endl;
                rs = 0;
            } else {
                cin >> m[i][j];
                cout << m[i][j] << " ";
                rs += m[i][j];
            }
        }
    }
    
    for (int i = 0; i < c+1; i++)
    {
        for (int j = 0; j < r+1; j++)
        {
            if (j == r && i == c){
                m[j][i] = cs;
                cout << m[j][i] << endl;
            } else if (j == r)
            {
                m[j][i] = cs;
                cout << m[j][i] << " ";
                cs = 0;
            } else
            {
                cs += m[j][i];
            }
        }
    }
}