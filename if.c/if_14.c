#include <stdio.h>
#include <math.h>

int main(){

    int a=3, b=4, c=6, big, small;

    if(a>b && a>c) big++;
    if(b>a && b>c) big++;
    if(c>a && c>b) big++;

    if(a<b && a<c) small++;
    if(b<a && b<c) small++;
    if(c<a && c<b) small++;{
    printf("big:%d\n", big);
    printf("small:%d\n", small);       
    }

    return 0;    
     
    
}