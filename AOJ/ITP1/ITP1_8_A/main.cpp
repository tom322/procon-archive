#include<iostream>
using namespace std;
int main(){
    string str, str2;
    // int len;
    // bool boo = false;
    // str = "a";

    // while (cin >> str)
    // {
    //     str2 += str + " ";
    // }

    // len = str2.length();
    // str2.replace(len - 1,1,"");

    getline(cin, str2);

    for (int i = 0; i < (int)str2.size(); i++)
    {
        if (str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] = tolower(str2[i]);
            // str2[i]+='a'-'A';
            cout << str2[i];
        } else if (str2[i] >= 'a' && str2[i] <= 'z') 
        {
            str2[i] = toupper(str2[i]);
            // str2[i]+='A'-'a';
            cout << str2[i];
        } else 
        {
            cout << str2[i];
        }
    }

    cout << endl;
    
}