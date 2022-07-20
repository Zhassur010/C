#include <stdio.h>


int main(){

    int n=6, i, net=0;
    for(int i=1; i<=(2*n-1); i+=2){
        net+=i;
        printf("N=%d\n", net);
    }

    return 0;
}