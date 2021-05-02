#include<iostream>
#include<algorithm>
#include<queue>
using namespace std;
int main(){
    string S, T, O;
    cin >> S;
    // S = "ozRnonnoe";
    bool rev = false;
    int num = 0;
    deque<char> d;

    for (char c : S)
    {
        if (c == 'R')
        {
            rev ^= 1;
        } else if (rev)
        {
            d.push_front(c);
        } else {
            d.push_back(c);
        }
    }

    if (rev) reverse(d.begin(), d.end());

    for (char c : d){
        if (T.size() && T.back()==c)
        {
            T.pop_back();
        } else {
            T.push_back(c);
        }
    }

    // for (int i = 0; i < S.length(); i++)
    // {

    //     if (S[i] == 'R' && T.length() != 0)  
    //     {
    //         reverse(T.begin(),T.end());
    //     } else
    //     {
    //         string t{S[i]};
    //         T += t;
    //     }
    // }

    // for (int i = 0; i < T.length(); i++)
    // {
    //     if (i == T.length() - 1 && num != T.length()){
    //         O += T[i];
    //         T = O;
    //         num = T.length();
    //         i = -1; 
    //         O = "";
    //         continue;
    //     }
    //     else if (i == T.length()-1)
    //     {
    //         O += T[i];
    //         T = O;
    //     } else if (T[i]==T[i+1])
    //     {
    //         i++;
    //     } else {
    //         O += T[i];
    //     }
    // }

    cout << T << endl;
    
    
}