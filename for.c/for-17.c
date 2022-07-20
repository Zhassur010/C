#include <stdio.h>
#include <math.h>


int main(){

    float a=2.2, r=1;
    int n=6, i;
    for(int i=1; i<n; i++){
        r+=a+pow(a,2)+(a, 3)+(a, n);
        printf("answer:%.2f\n", r);
    }

    return 0;
}