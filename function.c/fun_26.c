#include <stdio.h>
#include <stdbool.h>

int isPower5(int k){
    if(k==5){
        return true;
    }else{
        return false;
    }
}


int main(){

    int A=4, B=5, C=6;
    printf("daraja=%d\n", isPower5(A));
    printf("daraja=%d\n", isPower5(B));
    printf("daraja=%d\n", isPower5(C));

    return 0;
}