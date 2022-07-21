#include <stdio.h>


    double PowerA3(double son){
        return son*son*son;
    }

    int main(){

        double A=3, B=2, C=4;
        int D=2.2, E=1.1;

        printf("Answer;%lf \n",PowerA3(A));
        printf("Answer;%lf \n",PowerA3(B));
        printf("Answer;%lf \n",PowerA3(C));


        printf("Answer;%lf \n",PowerA3(D));
        printf("Answer;%lf \n",PowerA3(E));


        return 0;
    }
