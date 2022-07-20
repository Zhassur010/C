#include <stdio.h>
#include <math.h>

int main(){

    int a=5, b=4, c=6, yig;
    if((a>b)&&(a>c)){
        if(b>c){
            printf("%d\n", a+c){}
        }else{
            if((b>a)&&(b>c)){
                if(a>c){
                    printf("%d\n", b+a);
                }else{
                    if(a>b){
                        printf("%d\n", a+c);
                    }else{
                        printf("%d\n", b+c);
                    }
                }
            }
        }
    }
    

    return 0;
}