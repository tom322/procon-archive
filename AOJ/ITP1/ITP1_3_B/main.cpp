#include<iostream>
using namespace std;
int main(){
    int x;
    int i = 0;

    while(cin >> x){
        if (x == 0){
            break;
        } else {
            i = i + 1;
            cout << "Case " << i << ": " << x << endl; 
        }
    }

}