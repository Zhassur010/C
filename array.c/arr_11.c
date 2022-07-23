#include <stdio.h>


int main(){

    int N=10, K=5, i;
    int arr[10];
    for(int i=0; i<N; i++){
        printf("arr[%d]=", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i=K-1; i<N; i+=K){
        printf("%d\n", arr[i]);
    }

    return 0;
}