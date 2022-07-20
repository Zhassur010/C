#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, S,V;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    printf("c=");
    scanf("%lf",&c);
    V= (a*b*c);
    S= (2*(a*b+b*c+a*c));
    printf("result:%.0lf\n",S,V);

    return 0;
}
