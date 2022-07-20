#include <stdio.h>

int main(){

    float N=4, i, E=1;
    for(int i=0; i<=N; i++){
        E*=1.0+(float)i/10;
        printf("N=%d\n", E);
    }

    return 0;
}