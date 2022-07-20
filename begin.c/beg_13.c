#include <stdio.h>
#include <math.h>

int main(){

    double R1, R2, R3;
    double S1, S2, S3, Pi=3.14;
    printf("R1=");
    scanf("%lf", &R1);
    printf("R2=");
    scanf("%lf", &R2);
    printf("R3=");
    scanf("%lf", &R3);        
    S1= Pi * R1;
    S2= Pi * R2;
    S3= Pi * R3;
    printf("result%.2lf\n", S1,S2,S3);
    return 0;
}