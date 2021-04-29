#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str, pr, p, mid, last;
    int n, a, b;

    cin >> str >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> pr >> a >> b;

        if (pr == "print")
        {
            last = str.substr(a, b-a+1);
            cout << last << endl;
        } else if (pr == "reverse")
        {
            mid = str.substr(a,b-a+1);
            reverse(mid.begin(), mid.end());
            str = str.replace(a,b-a+1,mid);
        } else {
            cin >> p;
            str = str.replace(a, b-a+1, p);
        }
    }    
}