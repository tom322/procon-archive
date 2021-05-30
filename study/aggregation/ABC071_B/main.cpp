#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;

    bool a[26] = {};
    for (int i = 0; i < 26; i++)
    {
        a[i] = false;
    }

    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]-'a'] = true;
    }

    // // for (int i = 0; i < 26; i++)
    // // {
    // //     cout << a[i] << endl;
    // // }    
    
    for (int i = 0; i < 26; i++)
    {
        if (!a[i])
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        } 
    }
    
    cout << "None" << endl;
}