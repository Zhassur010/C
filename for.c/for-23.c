#include <stdio.h>

int main(){

    float x=2.2, rez=x, n1=x;
    int n=4, i;
    for(int i=1; i<n; i++){
        n1*=-1*x*x;
        rez+=n1;
        printf("answer:%f\n", rez);

    }

    return 0;
}