#include <stdio.h>

int main(){

    int a=1, b=3, i, k;
    for(int i=1; i<=b-a+1; i++){
        for(int k=1; k<=i; k++){
            printf("%d ", a+i-1);
            printf("%d \n");
        }
    }

    return 0;
}