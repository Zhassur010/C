#include <stdio.h>
#include <math.h>
#include <stdbool.h>


int main(){

    // A va B
    int A, B;
    printf("A=");
    scanf("%d", &A);
    printf("B=");
    scanf("%d", &B);
    bool ans;
    ans = (A > B) || (A < B);
    printf("ANSWER:%d\n",ans);

    return 0;
}