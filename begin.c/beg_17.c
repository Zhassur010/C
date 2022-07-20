#include <stdio.h>
#include <math.h>

int main(){

    float A, B, C, dob;
    printf("A=");
    scanf("%f", &A);
    printf("B=");
    scanf("%f", &B);
    printf("C=");
    scanf("%f", &C);
    AC = abs(A-C);
    BC = abs(B-C);
    dob= AC + BC;
    printf("resilt:%f\n", dob);

    return 0;
}