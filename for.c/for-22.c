#include <stdio.h>

int main(){

    int x=10, rez=1, n1=1, a1=1;
    int n=4, i;
    for(int i=1; i<n; i++){
        n1*=i;
        a1*=x;
        rez=n1/a1;
        printf("answer:%d\n", rez);

    }

    return 0;
}