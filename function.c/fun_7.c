#include <stdio.h>

int InvertDigit(int abc){
    int  a, b, c;
    c=abc%10;
    b=abc/10%10;
    a=abc/100;
    return abc;

}


int main(){

    int a=5, b=3, c=4;

    printf("C=: %d\n", InvertDigit(c));
    printf("B=: %d\n", InvertDigit(b));
    printf("A=: %d\n", InvertDigit(a));


    return 0;
}