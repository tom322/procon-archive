#include <iostream>
using namespace std;
int main() {
  int N, ans = 0;
  int mid = 0;
  // cin >> N;
  N = 7;

  for (int i = 1; i < N + 1; i++)
  {
        int num = i;
        int cnt = 0;
        while (true) {
            bool rep = false;
            if(num % 2 == 0) {
                num /= 2;
                cnt++;
            } else {
                rep = true;
            }
            if (rep) break;
        }
        if (mid < cnt) ans = i;
  }

  cout << ans << endl;

  return 0;
}