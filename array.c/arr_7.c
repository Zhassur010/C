#include <stdio.h>
#include <stdlib.h>


int main(){

    int N=10, i;
    int arr[10];
    for(int i=0; i<=N; i++){
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for(int i=N-1; i=>0; i--){
        printf("arr[%d]= %d\n", i, arr[i]);
    }

    return 0;
}