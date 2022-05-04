#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n, m, c;
    cin >> n >> m >> c;

    int a[n][m];
    int b[1][m];
    int right_answer_num = 0;

    for (int i = 0; i < m; i++) {
        cin >> b[0][i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];

        }

    }

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = 0; j < m; j++) {
            sum += a[i][j] * b[0][j];

        }

        sum += c;

        if (sum > 0) right_answer_num += 1;

    }

    cout << right_answer_num << endl;

}