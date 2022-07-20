#include <stdio.h>
#include <math.h>

int main(){

    int a=3, b=4, c=5;
    if(fabs(a-b)<fabs(b-c)){
        printf("B\n");
    }else{
            printf("C\n");
    }

    return 0;
}