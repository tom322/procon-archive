#include<iostream>
using namespace std;
int main(){
    string S;
    int n = 0;
    cin >> S;
    // S = "abcdZONefghi";

    for (int i = 0; i < 10; i++)
    {
        string str;
        str = S.substr(i, 4);
        if (str == "ZONe")
        {
            n++;
        }
    }
    
    cout << n << endl;
}