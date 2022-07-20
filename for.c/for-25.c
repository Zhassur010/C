#include <stdio.h>

int main(){

    float x=2.2, rez=x, rec=x;
    int n=4, i;
    for(int i=2; i<n; i++){
        rec*=-1*x;
        rez+=x/i;
        printf("answer:%f\n", rez);

    }

    return 0;
}