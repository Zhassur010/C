#include <stdio.h>
#include <math.h>

int main(){

    int a=4, b=4;

    if(a!=b){
        a=b=a+b;
    }else{
        a=b=0;
    }
    printf("a=%d\n b=%d\n", a,b);

    return 0;
}