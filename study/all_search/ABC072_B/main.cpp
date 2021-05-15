#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i];
        i++;
    }
    
    cout << endl;
}