#include <stdio.h>
#include <math.h>

void Triangle(float sum, float sum1){
    printf("triangle:%f\n", abs(1, 2)*sum*sum1);
    printf("perimetr:%f\n", (sum+sum1));
}

int main(){

    float  b=2, c=4, h=3, a=2;

    Triangle(a, c);
    Triangle(a, b);
    Triangle(a, h);
    

    return 0;
}