#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
    double r;
    cin >> r;
    //r = 34.1201;

    printf("%.6f %.6f\n", (r*r*M_PI),((r+r)*M_PI));
}