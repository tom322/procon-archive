#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;

    string ans;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i % 2 == 0) {
            if (s[i] == '1') {
                cout << "Takahashi" << endl;
                return 0;
            }
        } else if (i % 2 != 0) {
            if (s[i] == '1') {
                cout << "Aoki" << endl;
                return 0;
            }
        }
    }
    
}