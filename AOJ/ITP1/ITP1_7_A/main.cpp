#include<iostream>
using namespace std;
int main(){
    int m,f,r;

    while (cin >> m >> f >> r)
    {
        if (m==-1&&f==-1&&r==-1){
            break;
        } else if (m==-1||f==-1||m+f<30){
            cout << "F" << endl;
        } else if ((30<=m+f && m+f<50 && r>=50)||(50<=m+f && m+f<65)){
            cout << "C" << endl;
        } else if (30<=m+f && m+f<50){
            cout << "D" << endl;
        } else if (65<=m+f && m+f<80){
            cout << "B" << endl;
        } else if (80<=m+f){
            cout << "A" << endl;
        }
    }
    
}