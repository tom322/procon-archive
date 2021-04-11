#include<iostream>
using namespace std;
int main(){
    int x;
    int y;

    while(cin >> x >> y){
        if (x == 0 && y == 0){

        } else if (x > y){
            cout << y << " " << x << endl;
        } else if (x < y){
            cout << x << " " << y << endl;
        } else if (x == y){
            cout << x << " " << y << endl;
        }
    }

}