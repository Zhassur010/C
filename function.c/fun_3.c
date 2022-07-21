#include <stdio.h>

void MEAN(double son, double son2){
    printf("arifmetik:%.2lf\n", (son+son2)/2);
    printf("geometrick:%.4lf\n", (son*son2));
}

int main(){

    double A=2, B=3, C=4, D=6;
    MEAN(A,B);
    MEAN(A,C);
    MEAN(A,D);

    return 0;
}