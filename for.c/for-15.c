#include <stdio.h>
#include <math.h>

int main(){

    float A=2.2, r=1;
    int N=6, i;
    for(int i=1; i<=N; i++){
        r*=A;
        printf("N:%.2f\n", r);
    }

    return 0;
}