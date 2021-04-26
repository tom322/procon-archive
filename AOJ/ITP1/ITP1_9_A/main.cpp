#include<iostream>
#include<string>
#include <algorithm>
using namespace std;
int main(){
    string T, W;
    cin >> W;
    transform(W.begin(), W.end(), W.begin(), ::tolower);
    int n = 0;

    cin >> T;
    while (T != "END_OF_TEXT")
    {
        transform(T.begin(), T.end(), T.begin(), ::tolower);
        if (T == W) n++;
        cin >> T;
    }

    cout << n << endl;
    
}