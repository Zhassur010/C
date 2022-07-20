#include <stdio.h>
#include <math.h>

int main(){

    int a=3, b=4, c=5, e=8;
    if(b==c){
        printf("%d\n", 1);
    }else{
        if(a==c){
            printf("%d\n", 2);
        }else{
            if(c==e){
                printf("%d\n", 3);
            }else{
                    printf("%d\n", 4);
            }
        }
    }



    return 0;
}