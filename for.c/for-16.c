#include <stdio.h>


int main(){

    float a=2.2, p=0;
    int n=4, i;

    for(int i=1; i<=n; i++){
        p+=i*a;
        printf("n=%.3f\n", p);
    }

    return 0;
}