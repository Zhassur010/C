#include <stdio.h>

int main(){

    int n=6, k=8, i, ai;

    float rez=0, nk;
    for(int i=1; i<=n; i++){
        nk=i;
        for(int ai=1; ai<=k; ai++){
            nk*=i;
            rez=nk;
        }
    }
    
    printf("%f \n", rez);

    return 0;
}