#include<iostream>
using namespace std;
int main(){
    int b,f,r,v,N;
    int rms[12][10]={{}};

    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> b >> f >> r >> v;
        switch (b%4)
        {
        case 1:
            rms[-1+f][r-1]+=v;
            break;
        case 2:
            rms[2+f][r-1]+=v;
            break;
        case 3:
            rms[5+f][r-1]+=v;
            break;
        case 0:
            rms[8+f][r-1]+=v;
            break;
        }
    }

    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 10; j++){
            if(j < 9){
                cout << " " << rms[i][j];                
            } else {
                cout << " " << rms[i][j] << endl;
            }
        }
        if(i == 2 || i == 5 || i == 8) cout << "####################" << endl;
    }
}