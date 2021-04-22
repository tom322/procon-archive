#include<iostream>
using namespace std;
int main(){
    int n, m, l;
    cin >> n >> m >> l;

    int a[n][m], b[m][l];
    long long x = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> b[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {
                x += a[i][k]*b[k][j];
            }
            
            if (j == l-1){
                cout << x << endl;
                x = 0;
            } else {
                cout << x << " ";
                x = 0;
            }
        }
    }
}