#include <stdio.h>

void AddLeftDigit(int son, int raqam){
    printf("natija: %d\n", 1+raqam+son);
}

int main(){

    int K=3, R=6;
    AddLeftDigit(R, K);

    return 0;
}