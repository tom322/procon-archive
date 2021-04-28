#include<iostream>
using namespace std;
int main(){
    int n;
    int tp = 0;
    int hp = 0;
    string t, h;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t >> h;

            if (t > h){
               tp += 3; 
            } else if (t < h) {
                hp += 3;
            } else {
                tp += 1;
                hp += 1;
            }
    }

    cout << tp << " " << hp << endl;
}