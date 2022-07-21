#include <stdio.h>
#include <math.h>


int Doira(int son){
    int S, Pi=3.1415;
    S=Pi*pow(son, 2);
    return S;
}


int main(){

    int A=3, B=5, C=6;
    printf("A= %d\n", Doira(A));
    printf("B= %d\n", Doira(B));
    printf("C= %d\n", Doira(C));

    return 0;
}