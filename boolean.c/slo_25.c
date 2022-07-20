#include <stdio.h>
#include <stdbool.h>

int main(){

    int x=-2, y=10;
    bool answer;
    answer= (x<0) && (y>0);
    printf("answer:%d\n", answer);


    return 0;
}