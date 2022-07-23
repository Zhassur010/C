#include <stdio.h>
#include <stdlib.h>


int main(){

    int N=6, i;
    int arr[10];

    arr[0]=1;
    arr[1]=1;

    for(int i=2; i<N; i++){
        arr[i]=arr[i-2]+arr[i-1];
    }

    for(int i=0; i<N; i++){
        printf("%d : %d\n", i, arr[i]);
    }


    return 0;
}