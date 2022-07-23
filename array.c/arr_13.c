#include <stdio.h>


int main(){

    int i, N=5;
    int a[10];
    for(int i=0; i<N; i++){
        printf("a[%d]=", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=N-1; i>=0; i-=2){
        printf("%d\n", a[i]);
    } 

    return 0;
}