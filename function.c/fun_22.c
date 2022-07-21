#include <stdio.h>

int Quarter(int X, int Y){
    if(X&&Y>0){
        printf("POSITIVE %d\n");
    }else if(X&&Y<0){
        printf("NEGATIVE %d\n");
    }else{
        return X,Y;
    }
}


int main(){

    int X=4, Y=2;
    printf("X= %d, %d\n", Quarter(X, Y));

    return 0;
}