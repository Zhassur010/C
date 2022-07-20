#include <stdio.h>
#include <math.h>

int main(){

    float a=1.2, b=2.1;
    int n=16, i, h, rez=0;
    for(int i=0; i<n; i++){
        h=(a+b)/n;
        printf("H=%f\n", h);
        printf("%f\n", 1-sin(a+i*h));

    }

    return 0;
}