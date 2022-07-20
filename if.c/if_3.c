#include <stdio.h>
#include <math.h>

int main(){

    int x=8;
    if(x>5){
        x++;
    } else {
        if(x==0){
            x=10;
        } else {
            x -= 2;
        }
        
        
    }
    printf("result:%d\n", x);
    
    return 0;
}