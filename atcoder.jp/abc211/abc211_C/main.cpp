#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = s.size();
    vector<char> v(n);

    for(int i = 0; i < n; i++) s[i] >> v[i];

    int d[8] = {};
    int ans = 0;

    // d[0] = s.find("c");
    // if (s.find("c")){
    //     d[0] = s.find("c",d[0]);
    //     for (int i = d[0]; i < n; i++)
    //     {
    //         if (s.find("h")) {
    //             d[1] = s.find("h");
    //             for (int j = d[1] + 1; j < n; j++)
    //             {
    //                 if (s.find("o")) {
    //                     d[2] = s.find("o");
    //                     for (int k = d[2] + 1; k < n; k++)
    //                     {
    //                         if (s.find("k")){
    //                             d[3] = s.find("k");
    //                             for (int l = d[3] + 1; l < n; l++)
    //                             {
    //                                 if (s.find("u")) {
    //                                     d[4] = s.find("u");
    //                                     for (int m = d[4] + 1; m < n; m++)
    //                                     {
    //                                         if (s.find("d")) {
    //                                             d[5] = s.find("d");
    //                                             for (int o = d[5] + 1; o < n; o++)
    //                                             {
    //                                                 if (s.find("h"))
    //                                             }
                                                
    //                                         }
    //                                     }
                                        
    //                                 }
    //                             }
                                
    //                         }
    //                     }
                        
    //                 }
    //             }
                
    //         }
    //     }
    // }
    
}