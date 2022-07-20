#include <stdio.h>
#include <math.h>

int main(){

    // R = 3t^2 + 3l^5 + 4.9

    double t=3, l=5, R;
    
    R = 3*(pow(t, 2)) + 3*(pow(l, 5)) + 4.9;

    printf("Answer:%lf/n", R);

return 0;
}