#include<iostream>
#include <stdio.h>
using namespace std;
int main(){
    string s,m;
    int ss = 0;
    cin >> s;

    if (s[0] == '1') ss++;
    if (s[1] == '1') ss++;
    if (s[2] == '1') ss++;

    // m = s.substr(0,1);
    // ss = atoi(m.c_str());
    // m = s.substr(1,1);
    // ss += atoi(m.c_str());
    // m = s.substr(2,1);
    // ss += atoi(m.c_str());

    cout << ss << endl;

    return 0;
}