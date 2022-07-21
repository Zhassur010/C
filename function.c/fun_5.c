#include <stdio.h>
#include <math.h>

void Triangle(double son){
    printf("Perimetr:%lf\n", 2*(son+son));
}

int main(){

    double x1=2, y1=4, x2=3, y2=3;

    Triangle(x1);
    Triangle(y1);
    Triangle(x2);
    Triangle(y2);

    return 0;
}