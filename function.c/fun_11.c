#include <stdio.h>

double Minmax(double X, double Y){
    if(X<Y){
        printf("kichigi(X) %lf\n", Minmax(X));
    }else{
        printf("kattasi(X) %lf\n", Minmax(X));
    }
    if(Y<X){
        printf("kichigi(Y) %lf\n", Minmax(Y));
    }else{
        printf("kattasi(Y) %lf\n", Minmax(Y));
    }return Minmax(X, Y);
}

int main(){

    double a=2, b=3, c=4, d=6;
    Minmax(a, b);
    Minmax(d, c);

    return 0;
}