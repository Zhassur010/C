#include <stdio.h>
#include <stdbool.h>

int main(){

    int a=6, b=4, c=7;
    bool lop;
    lop= (a<b+c) && (b<a+c) && (c<a+b);
    printf("answer:%d\n", lop);

    return 0;
}