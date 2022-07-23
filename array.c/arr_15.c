#include <stdio.h>


int main(){

    int n=8, i;
    int a[10];
    for(int i=0; i<n; i++){
        printf("a[%d]=", i+1);
        scanf("%d", &a[i]);
    }

    for(int i=0; i<n; i+=2){
        printf("nofull= %d\n", a[i]);
    }

    for(int i=n-(n%2)-1; i>=1; i-=2){
        printf("full= %d\n", a[i]);
    }

    return 0;
}