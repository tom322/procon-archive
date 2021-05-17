#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int N, A, B;
    cin >> N >> A >> B;

    int ans = 0;
    for (int i = 1; i < N + 1; i++)
    {
        int calc = 0;
        int mid = i;
        for(int j = 0; j < 5; j++) calc += mid % 10, mid /= 10;
        if(calc >= A && calc <= B) ans+=i;
    }
    
    cout << ans << endl;
}