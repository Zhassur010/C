#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    if(a<b){
        printf("small=%d\n", a);
    } else {
        if(b<a){
            printf("small=%d\n", b);
        }
    }
    
    if(a>b){
        printf("big=%d\n", a);
    } else {
        if(b>a){
            printf("big=%d\n", b);
        }
    }
    return 0;
}