#include <stdio.h>
#include <math.h>

int main(){

    int a=3, b=4, c=1;
    if((a<b)&&(b<c)||(a>b)&&(b>c)){
        a=a*2;
        b=b*2;
        c=c*2;
    }else{
        a=a*(-1);
        b=b*(-1);
        c=c*(-1);
    }
    
        printf("A=%d\n B=%d\n C=%d\n", a,b,c);

    return 0;
}