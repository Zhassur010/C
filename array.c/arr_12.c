#include <stdio.h>


int main(){

    int i, N=12;
    int a[10];
    for(int i=0; i<N; i++){
        printf("a[%d]=", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=1; i<N; i+=2){
        printf("%d\n", a[i]);
    } 

    return 0;
}