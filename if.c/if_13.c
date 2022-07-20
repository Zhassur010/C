#include <stdio.h>
#include <math.h>

int main(){

    int a=4, b=3, c=5;
    if((b<a) && (a<b) || (b>a) && (a>c)){
        printf("a=%d\n", a);
    }else{
        if((a<b) && (b<a) || (b>a) && (b>c)){
            printf("b=%d\n", b);
        }else{
            printf("c=%d\n", c);
        }
    }

    return 0;
}