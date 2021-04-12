#include<iostream>
#include <vector>
using namespace std;
int main(){
    int H, W;

    while (cin >> H >> W){
        if (H == 0 && W == 0) {
            break;
        } else {
            vector<vector<string> > vec;
            vec.assign(H, vector<string>(W, "#"));

            for (int h = 0; h < H; h++) {
                for (int w = 0; w < W; w++) {
                    if (w == W - 1){
                        cout << vec.at(h).at(w);
                        cout << "\n";
                    } else {
                        cout << vec.at(h).at(w);
                    }
                }
                if (h == H - 1){
                    cout << "\n";
                }
            }
        }
    }
}