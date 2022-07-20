#include <stdio.h>

int main(){

    int n=6, f1=1, f2=1, i, fk;
    for(int i=3; i<n+1; i++){
        printf("i: %d \n", i);
        fk=f1+f2;
        f1=f2;
        f2=fk;
        printf("f: %d \n", fk);
    }


    return 0;
}