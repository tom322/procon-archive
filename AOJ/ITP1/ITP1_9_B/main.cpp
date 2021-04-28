#include<iostream>
using namespace std;
int main(){
    string cards;
    int m;
    int h;

    cin >> cards;

    while (cards != "-")
    {
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            cin >> h;

            cards = cards.substr(h,cards.size()-h) + cards.substr(0,h);
            // string c(cards,0,h);
            // string cards2(cards,h);
            // cards = cards2;
            // cards += c;
        }
        
        cout << cards << endl;
        cin >> cards;
    }
}