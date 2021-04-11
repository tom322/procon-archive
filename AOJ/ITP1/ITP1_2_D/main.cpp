#include<iostream>
using namespace std;
int main(){
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    /*
    W = 30;
    H = 50;
    x = -10;
    y = 40;
    r = 10;
    */

    if (x > 0 && y > 0){
        if(x - r >= 0 && y - r >= 0 && x + r <= W && y + r <= H){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (x > 0 && y <= 0){
        if(x - r >= 0 && y + r > 0 && x + r <= W && y + r <= H){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (x <= 0 && y > 0){
        if(x + r > 0 && y - r >= 0 && x + r <= W && y + r <= H){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else if (x <= 0 && y <= 0){
        if(x + r > 0 && y + r > 0 && x + r <= W && y + r <= H){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        cout << "No" << endl;
    }
}