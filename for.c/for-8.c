#include <stdio.h>

int main(){

    int a=4, b=6, i, R=1;
    for(int i=a; i<b; i++){
        R*=i;
        printf("answer:%d\n", R);
    }

    return 0;
}