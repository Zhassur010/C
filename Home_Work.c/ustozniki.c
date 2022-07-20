#include <stdio.h>
#include <math.h>

int main(){

    double y, S;
    printf("y=");
    scanf("%lf", &y);
    S = sqrt(cos(4*y*y)+7.151);
    printf("S=%lf\n",S);
    return 0;
}