#include <stdio.h>
#include <math.h>

int main(){
    int meses;
    scanf("%d", &meses);
    double aporte;
    scanf("%lf", &aporte);
    double taxa;
    scanf("%lf", &taxa);

    int repeticoes = 1;
    double calculo1;
    double calculo2;
    double resultado;

    for (int i = 0; i < meses; i++){
        calculo1 = 1 + taxa;
        calculo2 = (pow(1 + taxa, repeticoes) - 1) / taxa;
        resultado = aporte * calculo1 * calculo2;
        printf("Montante ao fim do mes %d: R$ %.2lf\n", repeticoes, resultado);
        repeticoes++;
    }

    return 0;
}