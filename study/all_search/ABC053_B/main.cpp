#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;
    int a, z;

    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A') {
            a = i;
            // cout << a << endl;
            break;
        }
    }
    
    for (int i = s.size() - 1; i > 0; i--)
    {
        if(s[i] == 'Z'){ 
            z = i;
            // cout << z << endl;
            break;
        }
    }

    cout << z - a + 1 << endl;
}