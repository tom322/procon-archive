#include<iostream>
using namespace std;
int main(){
    int N,x;
    cin >> N;
    //N = 30;

    for (int i = 1; i <= N; i++){
        x = i;
        if (x % 3 == 0){
            cout << " " << i;
            //i = i + 1;
            continue;
        }

        for (x; x > 0; x /= 10){
            if (x % 10 == 3){
               cout << " " << i;
               break;
            }
        }
        //i = i + 1;
    }
    cout << endl;
}