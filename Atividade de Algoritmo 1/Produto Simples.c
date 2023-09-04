#include <stdio.h>

int main(){
    int valor1;
    int valor2;

    scanf("%d", &valor1);
    scanf("%d", &valor2);

    int produto = valor1 * valor2;
    printf("PROD = %d\n", produto);

    return 0;
}