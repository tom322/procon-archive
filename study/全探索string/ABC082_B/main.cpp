#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string s, t;
    cin >> s >> t;

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    // reverse(s.rbegin(), s.rend());
    reverse(t.rbegin(), t.rend());

    // cout << s.substr(0, s.size()) << endl;
    // cout << t.substr(0, s.size()) << endl;

    if (s < t) cout << "Yes" << endl;
    else cout << "No" << endl;
}