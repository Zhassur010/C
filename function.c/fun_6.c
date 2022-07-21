#include <stdio.h>

void DigitCountSum(int sum){
    printf("natural:%d\n", sum, sum, sum);
    printf("yigindisi:%d\n", (sum+sum+sum));
}

int main(){

    int a=4, b=3, c=2;
    DigitCountSum(a);
    DigitCountSum(b);
    DigitCountSum(c);

    return 0;
}