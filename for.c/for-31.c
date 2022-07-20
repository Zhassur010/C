#include <stdio.h>


int main(){

    float ai=2;
    printf("%f \n", ai);
    int n=10, i, rez=0;
    for(int i=1; i<=n; i++){
        printf("A=(%d)%f \n", i, 1+2/ai);
        ai=1+2/ai;
    }

    return 0;
}