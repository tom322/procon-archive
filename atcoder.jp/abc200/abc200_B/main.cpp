#include<iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main(){
    long long N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++)
    {
        if (N % 200 == 0){
            N /= 200;
        } else {
            string str(to_string(N));
            str += "200";
            N = atoll(str.c_str());
        }
    }
    
    cout << N << endl;
}