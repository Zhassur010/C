#include <stdio.h>
#include <math.h>

int main(){

    float x1, x2, F;
    printf("x1=");
    scanf("%f", &x1);
    printf("x2=");
    scanf("%f", &x2);
    F= fabs(x2-x1);
    printf("result:%ff\n", F);


    return 0;
}