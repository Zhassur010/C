#include <stdio.h>

int main(){

    float ak, a1=1, a2=2, a3=3;
    printf("A(1)%f \n", a1);
    printf("A(2)%f \n", a2);
    printf("A(3)%f \n", a3);
    int n=6, i;
    for(int i=4; i<=n; i++){
        ak=a3+a2-2*a1;
        printf("F(%d)%f \n", i, ak);
        a1=a2;
        a2=a3;
        a3=ak;
    }

    return 0;
}