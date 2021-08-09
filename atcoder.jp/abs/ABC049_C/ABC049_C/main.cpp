#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = s.size();

    reverse(s.begin(), s.end());
    string t = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'm')
        {
            t += "maerd";
            i += 4;
        } else if (s[i] == 'e')
        {
            t += "esare";
            i += 4;
        } else if (s[i] == 'r' && s[i+1] == 'e' && s[i+2] == 'm')
        {
            t += "remaerd";
            i += 6; 
        } else if (s[i] == 'r' && s[i+1] == 'e' && s[i+2] == 's') {
            t += "resare";
            i += 5;
        } else {
            cout << "NO" << endl;
            return 0;
        }
        
    }

    if (s == t)
    {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}