#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, X;
    cin >> N >> X;

    int m[N];
    int dnt = 0;
    int min = 10000;
    for (int i = 0; i < N; i++)
    {
        cin >> m[i];
        X -= m[i];
        dnt++;
        if(min>m[i]) min = m[i];
    }

    for (int i = min; i < X; i+=min)
    {
        dnt++;
    }
    
    cout << dnt << endl;
}