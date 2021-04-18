#include <iostream>
using namespace std;
int main()
{
    int n, x;

    while (cin >> n >> x)
    {
        int y = 0;

        if (n == 0 && x == 0)
        {
            break;
        } else
            {
                for (int i = 1; i < n - 1; i++)
                {
                    for (int j = i + 1; j < n; j++)
                    {
                        for (int k = j + 1; k < n + 1; k++)
                        {
                            if (i + j + k == x)
                                y += 1;
                        }
                    }
                }
            }

        cout << y << endl;
    }
}