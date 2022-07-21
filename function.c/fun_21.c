#include <stdio.h>

int SumRange(int A, int B){
    int yigindi;
    yigindi= A+B;
    if(A>B){
        return 0;
    }
}

int main(){

    int A=2, B=4, C=6;
    printf("yigindi(A, B)= %d\n", SumRange(A, B));
    printf("yigindi(B, C)= %d\n", SumRange(B, C));

    return 0;
}