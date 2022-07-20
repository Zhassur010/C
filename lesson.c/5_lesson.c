#include <stdio.h>
#include <math.h>


int main(){

    int A=8, B=6, d;

    if(A<B){
        printf("A smallest:\n");
    } else {
        if(A>B){
        d = A;
        A = B;
        B = d;   
        }
        
        printf("A_smallest:%d\n", A,B);
    }

    
    return 0;
}