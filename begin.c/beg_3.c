#include <stdio.h>
#include <math.h>

int main(){

    double a, b, S, P;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    S=a*b;  
    P=2 * a+b;
    printf("result:%lf\n/result:%lf\n",S, P);

    return 0;
}