#include <stdio.h>
#include <math.h>

int main(){

    int N=6, i, R=0;
    for(int i=0; i<N; i++){
        R+=pow(N+i,2);
        printf("N=%d\n", R);
    }

    return 0;
}