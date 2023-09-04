#include <stdio.h>

int main(){
    double X;
    double Y;

    scanf("%lf", &X);
    scanf("%lf", &Y);

    double resultado = X / Y;
    printf("%.3f km/l\n", resultado);

    return 0;
}