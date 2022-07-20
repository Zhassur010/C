#include <stdio.h>

int main(){

    float a=1.2, r=1;
    int n=4, i, r2=1;
    for(int i=2; i<=n; i++){
        r2*=-a;
        r+=r2;
        printf("answer:%f\n", r);
    }

    return 0;
}