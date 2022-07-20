#include <stdio.h>
#include <math.h>

int main(){

    int a=4, b=6, i, T=0;
    for(int i=a; i<b; i++){
        T+=i*i;
        printf("answer:%d\n", T);
    }

    return 0;
}