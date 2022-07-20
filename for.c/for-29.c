#include <stdio.h>

int main(){


    float A=1.5, B=2.1, h;
    int N=6, i, rez=0;
    for(int i=0; i<N; i++){
        h=(A+B)/N;
        printf("%f\n", h);
        printf("%f\n", A+i*h);

    }

    return 0;
}