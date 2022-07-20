#include <stdio.h>
#include <math.h>

int main(){

    int a=3, b=4, c=5;
    if(b==c){
        printf("%d\n", 1);
    }else{
        if(a==c){
            printf("%d\n", 2);
        }else{
                printf("%d\n", 3);
        }
    }



    return 0;
}