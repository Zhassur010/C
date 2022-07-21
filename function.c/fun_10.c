#include <stdio.h>

void Swap(int son, int son2){
    printf("sonlar: %d\n", (son+son2)/2);
}

int main(){

    int A=3, B=4, C=6, D=2;
    Swap(A, B);
    Swap(D, C);

    return 0;
}