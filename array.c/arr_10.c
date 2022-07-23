#include <stdio.h>



int main(){

    int n=10, i;
    int arr[10];
    for(int i=0; i<n; i++){
        printf("arr[%d]=", i);
        scanf("%d", arr[i]);
    }

    for(int i=0; i<n; i++){
        if((arr[i]%2)==0){
             printf("full= %d\n", arr[i]);
        }
    }

    for(int i=n-1; i>=0; i--){
        if(arr[i]%2 !=0){
            printf("nofull= %d\n", arr[i]);
        }
    }

    return 0;
}