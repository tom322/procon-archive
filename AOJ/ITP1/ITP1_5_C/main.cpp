#include <stdio.h>
#include <algorithm>
#include<string>

using namespace std;

int main(){
	int H,W;
    string prev;
    //H = 2;
    //W = 2;

	while(true){
		scanf("%d %d",&H,&W);
		if(H == 0 && W == 0) break;
		for(int i = 0; i < H; i++){
			for(int j = 0; j < W; j++){
                if (i == 0 && j == 0) {
                    printf("#");
                    prev = "#"; 
                } else if (prev == "#"){
                    printf(".");
                    prev = ".";
                } else if (prev == ".") {
                    printf("#");
                    prev = "#";
                }
			}
			printf("\n");
            if (W % 2 == 0 && prev == "."){
                prev = "#";
            } else if (W % 2 == 0 && prev == "#"){
                prev = ".";
            }
		}
		printf("\n");
	}
}