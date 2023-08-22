#include <stdio.h>

int main(){
    int numero1;
    int numero2;
    int resultado;
    char operacao;

    printf("Insira a operacao:\n");
    printf("+ para soma\n");
    printf("- para subtracao\n");
    printf("* para multiplicacao\n");
    printf("/ para divisao\n");
    printf("%% para resto de divisao\n");
    scanf("%c", &operacao);

    printf("Insira o valor do numero 1:\n");
    scanf ("%d", &numero1);

    printf("Insira o valor do numero 2:\n");
    scanf ("%d", &numero2);
    
    if (operacao == '+') {
        resultado= numero1 + numero2;
    } 

    else if (operacao == '-'){
        resultado= numero1 - numero2;
    }

    else if(operacao == '*'){
        resultado= numero1 * numero2;
    }
    
    else if(operacao == '/'){
        resultado= numero1 / numero2;
    }
    
    else if(operacao == '%'){
        resultado= numero1 % numero2;
    }

    else {
        printf("Operacao invalida!");
        return 0;
    }

    printf("O resultado da sua operacao e: %d", resultado);


    return 0;

}