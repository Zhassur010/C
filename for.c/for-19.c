#include <stdio.h>

int main(){

    float N=4, i, rez=1;
    for(int i=1; i<N; i++){
        rez*=(float)i;
        printf("answer:%f\n", rez);
    }


    return 0;
}