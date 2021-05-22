#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string S;
    cin >> S;

    reverse(S.begin(), S.end());

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] == '6')
        {
            cout << '9';
        } else if (S[i] == '9')
        {
            cout << '6';
        } else {
            cout << S[i];
        }
    }

    cout << endl;
}