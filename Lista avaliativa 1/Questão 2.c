#include <stdio.h>

int main(){
    int numero;
    scanf("%d", &numero);
    int calculo = numero * 1;
    int resto;
    int soma = 0;

    if(numero % 2 == 0){
        printf("%d eh par\n", numero);
    }
    else if(numero % 2 != 0){
        printf("%d eh impar\n", numero);
    }

    while(calculo != 0){
        resto = calculo % 10;
        calculo = calculo / 10;
        soma = soma + resto;
        if (calculo != 0){
            resto = calculo % 10;
            calculo = calculo / 10;
            soma = soma + resto;
        }
    }
    printf("A soma dos algarismos de %d eh %d\n", numero, soma);

    return 0;
}