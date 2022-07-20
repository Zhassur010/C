#include <stdio.h>
#include <math.h>


int main(){

    int x=6;
    if(x<=0){
        printf("f(x)=%d\n", -x);
    }else{
        if(0<x<2){
            printf("f(x)=%d\n", pow(x, 2));
        }else{
            if(x>=2){
                printf("f(x)=%d\n", 4);
            }
        }
    }

    return 0;
}