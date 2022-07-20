#include <stdio.h>

int main(){

    double narx=12.3;
    for(int i=0.1; i<1.1; i+=0.1){
        printf("%dkg_k %lf \n", i, i*narx);
    }

    return 0;
}