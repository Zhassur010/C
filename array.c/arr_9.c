#include <stdio.h>
#include <stdlib.h>


int main(){

    int N=10, i, k=0;
    int arr[10];
    for(int i=0; i<=N; i++){
        printf("arr[%d]=", i);
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<N; i++){
        if((arr[i]%2)==0){
            k++;
            printf("full=  %d\n", arr[i]);
        }
    }

    return 0;
}