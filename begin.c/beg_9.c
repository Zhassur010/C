#include <stdio.h>
#include <math.h>

int main(){

    double a, b, G;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    G= sqrt(a*b);
    printf("result:%.0lf\n", G);

    return 0;
}