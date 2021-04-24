#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int N;
    // N =2;
    cin >> N;
    int A[N], B[N];
    int min, max, r, num;
    min = 0;
    max = 10000;
    vector<int> v;

    // A[0]=3;
    // A[1]=2;
    // B[0]=7;
    // B[1]=5;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < N; i++)
    {
        if(A[i]>min){
            min = A[i];
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        if(B[i]<max){
            max = B[i];
        }
    }
    
    for (int i = min; i < max + 1; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i >= A[j] && i <= B[j])
            {
                v.push_back(i);
            } else {
                min = i;
            }
        }
    }

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    num = v.size();

    cout << num << endl;
}