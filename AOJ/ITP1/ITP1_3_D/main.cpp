#include<iostream>
using namespace std;
int main(){
    int a, b, c, ans;
    ans = 0;
    cin >> a >> b >> c;

    for (a; a <= b; a++){
        if (c % a == 0){
            ans = ans + 1;
        } else{

        }
    }

    cout << ans << endl;
}