#include <stdio.h>

int main(){

    float N=12.3, i, z=0;
    for(int i=1; i<N; i++){
        z+=1/(float)i;
        printf("n=%f\n", z);
    }

    return 0;
}