#include <stdio.h>
#include <stdbool.h>

int main(){

    int A=8, B=10;
    bool answer;
    answer= (A!=B) || (A==B);
    printf("answer:%d\n", answer);


    return 0;
}