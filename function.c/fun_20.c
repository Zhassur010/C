#include <stdio.h>
#include <math.h>

int TraingleP(int son, int son2){
    int K;
    K=son+son2;
    return K;
}


int main(){

    int A=4, B=6;
    printf("A= %d\n", TraingleP(A));
    printf("B= %d\n", TraingleP(B));

    return 0;
}