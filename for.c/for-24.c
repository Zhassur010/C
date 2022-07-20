#include <stdio.h>

int main(){

    float x=2.2, rez=1.0, n1=1, a1=1;
    int n=4, i, k=0;
    for(int i=2; i<n; i++){
        n1*=(float)k;
        ++k;
        n1*=(float)k;
        ++k;
        a1*=-1*x*x;
        rez=n1/a1;
        printf("answer:%f\n", rez);

    }

    return 0;
}