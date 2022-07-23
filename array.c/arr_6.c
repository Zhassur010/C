#include <stdio.h>
#include <stdlib.h>


int main(){

    int i, i2, N=10;
    int arr[10];

    printf("A=");
    scanf("%d", &arr[0]);
    printf("B=");
    scanf("%d", &arr[1]);

    for(int i=2; i<N; i++){
        arr[i]=0;
        for(int i2=0; i2<i; i2++)
        arr[i]+=arr[i2];
    }
    
    for(int i=0; i<N; i++){
        printf("%d : %d\n", i, arr[i]);
    }

    return 0;
}