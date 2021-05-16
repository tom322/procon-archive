#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;

    bool c = false;
    for (int i = 0; i < 20; i++)
    {
        for (int k = 0; k < 26; k++)
        {
            if ((7*i+4*k)==N) c = true;
            else if ((7*i+4*k)>N) break;
        }
    }

    if(c==true) cout << "Yes" << endl;
    else cout << "No" << endl;
}