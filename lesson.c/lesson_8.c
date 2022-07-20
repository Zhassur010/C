#include <stdio.h>
#include <math.h>

int main(){

    float x=1.1, nx;
    if(x<0.5){
        printf("%f \n", 0);
    }else{
        if(0.5<=x<1.5){
            printf("%f \n", 1);
    }else{
        if(1.5<=x<2.5){
             printf("%f \n", 2);
    }else{
        if(2.5<=x<3.5){
              printf("%f \n", 3);
    }else{
         if(3.5<=x<4.5);{
                        printf("%f \n", 4);
                    }else{
                        if(x>=4.5){
                            printf("%f \n", 5);
                        }
                    }
                }
            }
        }
    }

    return 0;
}