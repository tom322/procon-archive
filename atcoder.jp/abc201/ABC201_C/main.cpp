#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string S;
    cin >> S;
    int mst = 0;
    int myb = 0;
    int mstup = 0;
    int mstdown = 0;

    for (int i = 0; i < 10; i++)
    {
        if (S[i] == 'o') mst++;
        if (S[i] == '?') myb++;
    }

    mstup = mst;
    for (int i = cnt-1; i > 0; i--)
    {
        mstup*=i;
        // cout << up << endl;
    }

    mstdown = mst - 4;
    for (int i = down - 1; i > 0; i--)
    {
        down*=i;
    }
    
    cout << up/down << endl;
}