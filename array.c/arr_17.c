#include <stdio.h>


int main(){

    int i, N=10;
    int a[10];


    for(int i=0; i<N; i++){
        printf("a[%d]=", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<N/2+5; i+=2){
        printf("%d\n", a[i]);
        if(i<N/2){
            printf("%d\n", a[i+1]);
        }else if(N-i-2>N/2){
            printf("%d\n", a[N-i-2]);
        }else if(N-i-1>N/2){
            printf("%d\n", a[N-i-1]);
        }
    }


    return 0;
}