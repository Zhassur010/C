#include <stdio.h>

int AddRightDigit(int son, int raqam){
    printf("sonlar: %d, %d\n", son, raqam);
    return (son+raqam)/9;
    //return son<=raqam<=9;
}

int main(){

    int R=10, K=10;
    printf("natija: %d\n", AddRightDigit(R, K));

    return 0;
}