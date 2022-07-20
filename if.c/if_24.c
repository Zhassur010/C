#include <stdio.h>
#include <math.h>

int main(){

    int x=6;
    if(x>0){
        printf("f(x)=%d\n", 2*sin(x));
    }else{
        if(x<=0){
            printf("f(x)=%d\n", x-6);
        }
    }

    return 0;
}