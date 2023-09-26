#include <stdio.h>

int main(){
    char experiencia;
    scanf(" %c", &experiencia);
    double salario;
    scanf("%lf", &salario);
    double aumento;

    if (experiencia == 'a'){
        aumento = 0.05 * salario;
        salario = salario + aumento;
    }
    else if (experiencia == 'b'){
        aumento = 0.07 * salario;
        salario = salario + aumento;
    }
    else if (experiencia == 'c'){
        aumento = 0.08 * salario;
        salario = salario + aumento;
    }
    printf("R$ %.2lf\n", salario);


    return 0;
}