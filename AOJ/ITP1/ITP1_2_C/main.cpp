#include<iostream>
using namespace std;
int main(){
    int a,b, c;
    cin >> a >> b >> c;
    int seq[3] = {a,b,c};

    if (a > b){
        seq[0]=b;
        seq[1]=a;
        if (a > c){
            seq[1]=c;
            seq[2]=a;
            if (b > c){
                seq[0]=c;
                seq[1]=b;
            }
        }
    } else if (a < b){
        if (b > c){
            seq[1]=c;
            seq[2]=b;
            if (a > c){
                seq[0]=c;
                seq[1]=a;
            }            
        }
    }
    cout << seq[0] << " " << seq[1] << " " << seq[2] << endl;
}