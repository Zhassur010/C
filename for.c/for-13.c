#include <stdio.h>
#include <math.h>

int main(){

    float N=8, i, S=0;
    for(int i=1; i<=N; i++){
        S+= pow(-1, i+1)*(1.0+(float)i/10);
        printf("answer;%f\n", S);
    }

    return 0;
}