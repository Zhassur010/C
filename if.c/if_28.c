#include <stdio.h>
#include <math.h>


int main(){

    int x=2022;
    if((x%0)==0){
        if((x%100)==0){
            printf("366\n");
        }else{
            printf("365\n");
        }else{
            if((x%400)==0){
            printf("366\n");
        }else{
            printf("365\n");
            }
        }
    }

return 0;
}