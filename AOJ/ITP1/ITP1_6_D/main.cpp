#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    int b[m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
            //cout << a[i][j];
        }
        //cout << endl;
    }

    for(int i=0; i<m; i++){
        cin >> b[i];
        //cout << b[i] << endl;
    }

    for(int i=0; i<n; i++){
        int c = 0;
        for (int j = 0; j < m; j++)
        {
            c+=a[i][j]*b[j];
        }
        cout << c << endl;
    }
}