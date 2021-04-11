#include<iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    long long sum;
    cin >> n;
    int nums[n];
    sum = 0;
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        sum = sum + nums[i];
    }

    cout << *min_element(nums, nums + n) << " " << *max_element(nums, nums + n) << " " << sum << endl;
}