#include <stdio.h>
#include <stdlib.h>


int main(){

    int i=1, n=10, son[10];
    for(int i=1; son[0]=2; i<n; ++i){
        son[i]=son[i-1]*2;
    }

    for(int i=0; i<n; i++){
        printf("%d, %d\n", i, son[i]);
    }

    return 0;
}