#include <stdio.h>
#include <math.h>


int main(){

    int x=999;

    if((x%2)==0){
        printf("musbat\n");
    }else{
        printf("juft\n");
    }else{
        if(x>99){
            printf("uchlik\n");
        }else{
            if((x>=99) & (x>9)){
                printf("ikkilik\n");
            }else{
                if(x<=9){
                    printf("birlik\n");
                }
            }
        }
    }

    return 0;
}