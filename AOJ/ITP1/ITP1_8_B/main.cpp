#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;

// int ctoi (const char c){
//     switch(c){
//         case '0' : return 0;
//         case '1' : return 1;
//         case '2' : return 2;
//         case '3' : return 3;
//         case '4' : return 4;
//         case '5' : return 5;
//         case '6' : return 6;
//         case '7' : return 7;
//         case '8' : return 8;
//         case '9' : return 9;
//     }
// }

int main(){
    string str;
    int sum = 0;

    while (cin >> str)
    {
        if (str == "0"){
            break;
        }else{
            for (int i = 0; i < (int)str.size(); i++)
            {
                // sum += ctoi(str[i]);
                sum += str[i] - '0';
            }
            cout << sum << endl;
            sum = 0;
        }        
    }
}