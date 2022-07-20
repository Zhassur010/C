#include <stdio.h>

int main(){

    int k=6, i, n=8, f1=1, f2=1;
    printf("F(1)%d \n",f1);
    printf("F(2)%d \n",f2);

    for(int i=3; i<=k; i++){

        f1=f1+f2;
        f2=f1-f2;
        printf("F(%d)%d\n", i, f1);
    }



    return 0;
}