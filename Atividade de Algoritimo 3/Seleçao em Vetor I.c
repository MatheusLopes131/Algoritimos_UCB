#include <stdio.h>

int main(){
    float A[100];

    for (int i = 0; i <= 99; i++){
        scanf("%f", &A[i]);
        if (A[i] <= 10){
            printf("A[%d] = %.1f\n", i , A[i]);
        }
    }

    return 0;
}