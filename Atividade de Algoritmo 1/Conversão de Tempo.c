#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int valor1 = N/60;
    int horas = valor1/60;
    int minutos = valor1- (horas*60);
    int segundos= N%60;

    printf("%d:%d:%d\n",horas,minutos,segundos);

    return 0;
}