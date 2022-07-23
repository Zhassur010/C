#include <stdio.h>


int main(){

    int k;
    int a[11];

    for(int k=0; k<10; k++){
        printf("a[%d]=", k+1);
        scanf("%d", &a[k]);
    }
    for(int k=0; a[k]>=a[9]; k++){
        if(k==10){
            printf("0\n");
        }else{
            printf("%d\n", a[k]);
        }
    }

    printf("%d : %d\n", k, a[k]);

//    if(k==10){
//        printf("0\n");
//    }else{
//        printf("%d\n", a[k]);
//    }

    return 0;
}