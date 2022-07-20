#include <stdio.h>

int main(){

    int N=6, i, po=1, pa=0;
    for(int i=1; i<N; i++){
        po*=i;
        pa+=po;
        printf("answer:%d\n", pa);

    }

    return 0;
}