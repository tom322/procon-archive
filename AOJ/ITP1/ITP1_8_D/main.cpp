#include<iostream>
#include<string>
using namespace std;
int main(){
    string s, p;
    int n;
    cin >> s >> p;

    s = s + s;
    n = s.find(p);
    if (n == string::npos) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
}