#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s[4];
    cin >> s[0] >> s[1] >> s[2] >> s[3];

    sort(s, s + 4);
    if (s[0] == "2B" && s[1] == "3B" && s[2] == "H" && s[3] == "HR") cout << "Yes" << endl;
    else cout << "No" << endl;

    // cout << s[0] << s[1] << s[2] << s[3] << endl;
}