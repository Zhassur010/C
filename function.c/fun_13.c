#include <stdio.h>

int SortDeck3(int A, int B, int C){
    if(A<B){
        printf("A= %d\n", A);
    }
    if(A>B){
        printf("B= %d\n", B);
    }else{
        printf("C= %d\n", C);
    }return C>(A&&B);
}


int main(){

    int A1=3, B1=3, C1=6, A2=6, B2=4, C2=8;
    SortDeck3(A1, B1, C1);
    SortDeck3(A2, B2, C2);

    return 0;
}