#include <stdio.h>


int main(){

    int i, N=10;
    int a[10];


    for(int i=0; i<N; i++){
        printf("a[%d]=", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<N/2; i++){
        printf("%d\n", a[i]);
        printf("%d\n", a[N-1-i]);
    }

    if(N%2 !=0){
        printf("%d\n", a[(N/2)]);
    }

    return 0;
}