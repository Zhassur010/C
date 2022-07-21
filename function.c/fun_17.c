#include <stdio.h>
#include <stdbool.h>

bool isSquare(int son){
    int ildiz=sqrt(son);

    if(son-pow(ildiz, 2)==0){
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