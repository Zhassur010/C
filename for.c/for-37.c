#include <stdio.h>

int main(){

    int n=6, k=8, i, ai;

    float rez=0, ni;
    for(int i=1; i<=n; i++){
        ni=i;
        for(int ai=1; ai<=i; ai++){
            ni*=i;
            rez=ni;
        }
    }
    
    printf("%f \n", rez);

    return 0;
}