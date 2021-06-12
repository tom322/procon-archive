#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int g[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> g[i][j];
        }
        
    }
    
    int A[3], B[3];
    for (int a1 = 0; a1 < 101; a1++)
    {
        for (int a2 = 0; a2 < 101; a2++)
        {
            for (int a3 = 0; a3 < 101; a3++)
            {
                int b1 = g[0][0] - a1;
                int b2 = g[0][1] - a1;
                int b3 = g[0][2] - a1;

                A[0] = a1;
                A[1] = a2;
                A[2] = a3;
                B[0] = b1;
                B[1] = b2;
                B[2] = b3;

                bool judge = true;
                for (int i = 0; i < 3; i++)
                {
                    for (int j = 0; j < 3; j++)
                    {
                        if ((A[i] + B[j]) != g[i][j]) judge = false;  
                    }
                    
                }

                if (judge) {
                    cout << "Yes" << endl;
                    return 0;
                }
                
            }
            
        }
        
    }

    cout << "No" << endl;
    
    
}