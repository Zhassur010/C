#include <stdio.h>

int main(){

    float x=2.2, rez=1, rec=1, rev=x, bin=x;
    int n=4, i;
    for(int i=2; i<n; i++){
        rec*=2*x-1; 
        rez*=2*i;
        rev*=x*x;
        bin= rev*rez/(rec*(2*i+1));    
        printf("answer:%f\n", bin);

    }

    return 0;
}