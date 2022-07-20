#include <stdio.h>
#include <math.h>

int main(){

    int num=4;
    if(num>5){
        num++;
    }else{
        if(num<5){
            num-=2;
        }
    }
    printf("result:%d\n", num);


    return 0;
}