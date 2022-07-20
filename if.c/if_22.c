#include <stdio.h>
#include <math.h>

int main(){

    int x, y;
    if((x<0)&&(y<0)){
        printf("I\n");
    }else{
        if((x<0)&&(y>0)){
            printf("II\n");
        }else{
            if((x<0)&&(y<0)){
                printf("III\n");
            }else{
                printf("IV\n");
            }
        }
    }


    return 0;
}