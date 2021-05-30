#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;

    int r = m * 2;
    int t[101] = {};
    for (int i = 0; i < r; i++)
    {
        int num = 0;
        cin >> num;
        t[num-1]++;
    }
    
    for(int i = 0; i < n; i++) cout << t[i] << endl;
}