#include <stdio.h>
#include <math.h>

int main(){

    int a=4, b=3, c=1;

    if(a<b && b<c){
        printf("a=%d\n", a);
    }else{
        if(b<a && b<c){
            printf("b=%d\n", b);
        }else{
            printf("c=%d\n", c);
        }
    }
    


    return 0;
}