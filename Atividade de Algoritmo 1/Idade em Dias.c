#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int ano = N/365;
    int mes = (N - (ano*365))/30;
    int dias = (N - (ano*365) - (mes*30));

    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}