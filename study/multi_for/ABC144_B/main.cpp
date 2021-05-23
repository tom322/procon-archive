#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    bool ans = false;

    for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            if(i * k == N) ans = true;
        }
        
    }
    
    if (ans == true) cout << "Yes" << endl;
    else cout << "No" << endl;
}