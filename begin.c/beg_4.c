#include <stdio.h>
#include <math.h>

int main(){
    double d;
    double L, Pi=3.14;
    printf("d=");
    scanf("%lf",&d);
    L= Pi * d;
    printf("result:%.0lf\n",L);

    return 0;
}