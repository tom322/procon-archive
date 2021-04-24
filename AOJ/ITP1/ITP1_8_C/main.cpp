#include<iostream>
using namespace std;

int main(){
    string str, str2;
    // getline(cin, str);
    int alp[26]={};

    while (cin >> str2)
    {
        str += str2;
    }
    

    for (int i = 0; i < (int)str.size(); i++)
    {
        if (str[i] == 'a' || str[i] == 'A'){
            alp[0] += 1;
            continue;
        } else if (str[i] == 'b' || str[i] == 'B'){
            alp[1] += 1;
            continue;
        } else if(str[i] == 'c' || str[i] == 'C'){
            alp[2] += 1;
            continue;
        } else if (str[i] == 'd' || str[i] == 'D'){
            alp[3] += 1;
            continue;
        } else if (str[i] == 'e' || str[i] == 'E'){
            alp[4] += 1;
            continue;
        } else if (str[i] == 'f' || str[i] == 'F'){
            alp[5] += 1;
            continue;
        } else if (str[i] == 'g' || str[i] == 'G'){
            alp[6] += 1;
            continue;
        } else if (str[i] == 'h' || str[i] == 'H'){
            alp[7] += 1;
            continue;
        } else if (str[i] == 'i' || str[i] == 'I'){
            alp[8] += 1;
            continue;
        } else if (str[i] == 'j' || str[i] == 'J'){
            alp[9] += 1;
            continue;
        } else if (str[i] == 'k' || str[i] == 'K'){
            alp[10] += 1;
            continue;
        } else if (str[i] == 'l' || str[i] == 'L'){
            alp[11] += 1;
            continue;
        } else if (str[i] == 'm' || str[i] == 'M'){
            alp[12] += 1;
            continue;
        } else if (str[i] == 'n' || str[i] == 'N'){
            alp[13] += 1;
            continue;
        } else if (str[i] == 'o' || str[i] == 'O'){
            alp[14] += 1;
            continue;
        } else if (str[i] == 'p' || str[i] == 'P'){
            alp[15] += 1;
            continue;
        } else if (str[i] == 'q' || str[i] == 'Q'){
            alp[16] += 1;
            continue;
        } else if (str[i] == 'r' || str[i] == 'R'){
            alp[17] += 1;
            continue;
        } else if (str[i] == 's' || str[i] == 'S'){
            alp[18] += 1;
            continue;
        } else if (str[i] == 't' || str[i] == 'T'){
            alp[19] += 1;
            continue;
        } else if (str[i] == 'u' || str[i] == 'U'){
            alp[20] += 1;
            continue;
        } else if (str[i] == 'v' || str[i] == 'V'){
            alp[21] += 1;
            continue;
        } else if (str[i] == 'w' || str[i] == 'W'){
            alp[22] += 1;
            continue;
        } else if (str[i] == 'x' || str[i] == 'X'){
            alp[23] += 1;
            continue;
        } else if (str[i] == 'y' || str[i] == 'Y'){
            alp[24] += 1;
            continue;
        } else if (str[i] == 'z' || str[i] == 'Z'){
            alp[25] += 1;
            continue;
        } 
        
    //     switch (str[i])
    //     {
    //     case 'a':
    //     case 'A':
    //         alp[0] += 1;
    //         continue;
    //     case 'b':
    //     case 'B':
    //         alp[1] += 1;
    //         continue;
    //     case 'c':
    //     case 'C':
    //         alp[2] += 1;
    //     case 'd' || 'D':
    //         alp[3] += 1;
    //     case 'e' || 'E':
    //         alp[4] += 1;
    //     case 'f' || 'F':
    //         alp[5] += 1;
    //     case 'g' || 'G':
    //         alp[6] += 1;
    //     case 'h' || 'H':
    //         alp[7] += 1;
    //     case 'i' || 'I':
    //         alp[8] += 1;
    //     case 'j' || 'J':
    //         alp[9] += 1;
    //     case 'k' || 'K':
    //         alp[10] += 1;
    //     case 'l' || 'L':
    //         alp[11] += 1;
    //     case 'm' || 'M':
    //         alp[12] += 1;
    //     case 'n' || 'N':
    //         alp[13] += 1;
    //     case 'o' || 'O':
    //         alp[14] += 1;
    //     case 'p' || 'P':
    //         alp[15] += 1;
    //     case 'q' || 'Q':
    //         alp[16] += 1;
    //     case 'r' || 'R':
    //         alp[17] += 1;
    //     case 's' || 'S':
    //         alp[18] += 1;
    //     case 't' || 'T':
    //         alp[19] += 1;
    //     case 'u' || 'U':
    //         alp[20] += 1;
    //     case 'v' || 'V':
    //         alp[21] += 1;
    //     case 'w' || 'W':
    //         alp[22] += 1;
    //     case 'x' || 'X':
    //         alp[23] += 1;
    //     case 'y' || 'Y':
    //         alp[24] += 1;
    //     case 'z' || 'Z':
    //         alp[25] += 1;
            
    //     default:
    //         continue;
    //     }
    }

    for (int i = 0; i < 26; i++)
    {
        switch (i)
        {
        case 0:
            cout << "a : " << alp[i] << endl;
            continue;
        case 1:
            cout << "b : " << alp[i] << endl;
            continue;
        case 2:
            cout << "c : " << alp[i] << endl;
            continue;
        case 3:
            cout << "d : " << alp[i] << endl;
            continue;
        case 4:
            cout << "e : " << alp[i] << endl;
            continue;
        case 5:
            cout << "f : " << alp[i] << endl;
            continue;
        case 6:
            cout << "g : " << alp[i] << endl;
            continue;
        case 7:
            cout << "h : " << alp[i] << endl;
            continue;
        case 8:
            cout << "i : " << alp[i] << endl;
            continue;
        case 9:
            cout << "j : " << alp[i] << endl;
            continue;
        case 10:
            cout << "k : " << alp[i] << endl;
            continue;
        case 11:
            cout << "l : " << alp[i] << endl;
            continue;
        case 12:
            cout << "m : " << alp[i] << endl;
            continue;
        case 13:
            cout << "n : " << alp[i] << endl;
            continue;
        case 14:
            cout << "o : " << alp[i] << endl;
            continue;
        case 15:
            cout << "p : " << alp[i] << endl;
            continue;
        case 16:
            cout << "q : " << alp[i] << endl;
            continue;
        case 17:
            cout << "r : " << alp[i] << endl;
            continue;
        case 18:
            cout << "s : " << alp[i] << endl;
            continue;
        case 19:
            cout << "t : " << alp[i] << endl;
            continue;
        case 20:
            cout << "u : " << alp[i] << endl;
            continue;
        case 21:
            cout << "v : " << alp[i] << endl;
            continue;
        case 22:
            cout << "w : " << alp[i] << endl;
            continue;
        case 23:
            cout << "x : " << alp[i] << endl;
            continue;
        case 24:
            cout << "y : " << alp[i] << endl;
            continue;
        case 25:
            cout << "z : " << alp[i] << endl;
            continue;
        }
    }
}