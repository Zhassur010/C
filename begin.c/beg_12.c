#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c,P;
    printf("a=");
    scanf("%lf",&a);
    printf("b=");
    scanf("%lf",&b);
    c= sqrt(pow(a, 2)+pow(b, 2));
    P= (a + b + c);
    printf("result:%lf\n", c,P);    


    return 0;
}