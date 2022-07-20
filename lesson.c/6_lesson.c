#include <stdio.h>
#include <math.h>

int main(){

    int m1=5, m2=4, m3=8, x1=6, y1=7, x2=3, y2=2, x3=9, y3=3, x, y;
    x=(x1*m1+x2*m2+x3*m3)/(m1+m2+m3);
    printf("X=%d \n", x);
    y=(y1*m1+y2*m2+y3*m3)/(m1+m2+m3);
    printf("Y=%d \n", y);
    return 0;
}

// a mojno eshyo tak 
// m=m1+m2+m3;
// x=(y1*m1+y2*m2+y3*m3)/m;