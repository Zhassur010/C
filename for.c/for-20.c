#include <stdio.h>

int main(){

    int N=6, i, rex=1, rez=0;
    for(int i=1; i<N; i++){
        rex*=i;
        rez+=rex;
        printf("answer:%d\n", rez);
        printf("SUM=%d \n", rex);

    }

    return 0;
}