#include <stdio.h>
#include <math.h>

int main(){

    int num=321, k_1, k_2, k_3, OB;
    k_1= num/100;
    k_2= (num-(k_1*100))/10;
    k_3= num % 10;
    OB = k_1+k_2+k_3;
    printf("answer:%d\n", OB);

    return 0;
}