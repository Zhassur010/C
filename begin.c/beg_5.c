#include <stdio.h>
#include <math.h>

int main(){

    double a, V, S;
    printf("a=");
    scanf("%lf",&a);
    V= pow(a, 3);
    S=(6*(pow(a, 2)));
    printf("result_V:%lf\n/result_S:%lf\n", V, S);

    return 0;
}