#include <stdio.h>
#include <math.h>

int main(){

    int narx=12.3;
    for(int i=1; i<=11; i++){
        printf("%dkg_k \n %.0lf som\n", i, i*narx);
    }

    return 0;
}