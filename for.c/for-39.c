#include <stdio.h>

int main(){
    int a, b;

    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    int i, ai, rez=0;
    for(int i=a; i<=b; i++){
        for(int ai=1; ai<=b; ai++)
        printf("%d \n", i);
        printf("\n");
    }

    return 0;
}