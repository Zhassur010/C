#include <stdio.h>
#include <math.h>


int main(){

    int x=19;
    if(x<0){
        printf("f(x)=%d\n", 0);
    }else{
        if(x%2==0){
            printf("f(x)=%d\n", 1);
        }else{
            printf("f(x)=%d\n", -1);
        }
    }

    return 0;
}