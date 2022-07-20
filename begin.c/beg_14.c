#include <stdio.h>
#include <math.h>

int main(){

    double R;
    double S, L, Pi=3.14;
    printf("R=");
    scanf("%lf", &R);       
    L= 2 * Pi * R;
    S= Pi * pow(R, 2);
    printf("result%.2lf\n", S,L);
    return 0;
}