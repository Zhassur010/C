#include <stdio.h>


int main(){

    float ai=1;
    printf("%f \n", ai);
    int n=6, i;
    for(int i=1; i<n; i++){

        printf("A=(%d)%f \n", i, (ai+1)/i);
        ai=(ai+1)/i;
    }


    return 0;
}