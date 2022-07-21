#include <stdio.h>
#include <stdbool.h>


int Even(int K){
    if(K<0){
        return true;
    }else{
        return false;
    }
}



int main(){

    int A=4, B=-2, C=6;
    printf("Juft= %d\n", Even(A));
    printf("Juft= %d\n", Even(B));
    printf("Juft= %s\n", Even(C));

    return 0;
}