#include <stdio.h>
#include <stdbool.h>

bool isPowerN(int K, int N){
    if(N==K){
        return true;
    }else{
        return false;
    }
}


int main(){

    int a=3, b=5, c=8, d=2, s=6;
    printf("%d\n", isPowerN(a));

    return 0;
}