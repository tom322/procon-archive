#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, m, c;
    cin >> n >> m >> c;

    int b[m];
    int right_answer_num = 0;

    for (int i = 0; i < m; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        int sum = c;

        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            sum += a * b[j];

        }

        if (sum > 0) right_answer_num += 1;

    }

    cout << right_answer_num << endl;

}