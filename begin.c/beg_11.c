#include <stdio.h>
#include <math.h>

int main(){

    double a, b;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("%lf\n", abs(a)+abs(b));
    printf("%lf\n", abs(a)-abs(b));
    printf("%lf\n", abs(a)*abs(b));
    printf("%lf\n", abs(a)/abs(b));


    return 0;
}