#include <stdio.h>
#include <stdbool.h>

double isSquare(double k){
    int ildiz = sqrt(k);

    if(k-pow(ildiz, 2)==0){
        return true;
    }else{
        return false;
    }
}

int main(){

    for(int i=1; i<50; i++){
        printf("natija(%d): %d\n", i, isSquare(i));
    }

    return 0;
}