#include <stdio.h>
#include <math.h>


double RingS(double son){
    int S, Pi=3.1415;
    S=Pi*pow(son, 2);
    return S;
}


int main(){

    double R1=6, R2=8;
    printf("R1= %.6lf\n", RingS(R1));
    printf("R2= %lf\n", RingS(R2));


    return 0;
}