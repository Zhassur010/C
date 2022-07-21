#include <stdio.h>
#include <math.h>

void PowerA234(double son){
    printf("answer(a^2):%lf\n", pow(son, 2));
    printf("answer(b^3):%lf\n", pow(son, 3));
    printf("answer(c^4):%lf\n\n", pow(son, 4));

}

int main(){

    double A=2, B=4, C=3;

    PowerA234(A);
    PowerA234(B);
    PowerA234(C);

    return 0;
}