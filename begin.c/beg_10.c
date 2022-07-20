#include <stdio.h>
#include <math.h>

int main(){

    double a, b;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("%lf\n", a*a+b*b);
    printf("%lf\n", a*a-b*b);
    printf("%lf\n", a*a*b*b);
    printf("%lf\n", (a*a)/(b*b));

    return 0;
}