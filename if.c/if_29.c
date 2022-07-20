#include <stdio.h>
#include <math.h>


int main(){

    int x=4;
    if(x==0){
        printf("nolga teng\n");
    }else{
        if(x>0){
            printf("juft son\n");
        }else{
            if((x%2)==0){
                printf("musbat\n");
            }else{
                printf("minuslik\n");
            }
        }
    }

    return 0;
}