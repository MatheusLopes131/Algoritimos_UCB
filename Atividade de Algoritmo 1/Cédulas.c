#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if (N>0 && N<1000000) {
        int valor1 = N / 100;
        int valor2 = (N-(100*valor1))/ 50;
        int valor3 = (N- (100*valor1) - (50*valor2))/ 20;
        int valor4 = (N - (100*valor1) - (50*valor2) - (20*valor3))/10;
        int valor5 = (N - (100*valor1) - (50*valor2) - (20*valor3) - (10*valor4))/5;
        int valor6 = (N - (100*valor1) - (50*valor2) - (20*valor3) - (10*valor4) - (5*valor5))/2;
        int valor7 = (N - (100*valor1) - (50*valor2) - (20*valor3) - (10*valor4) - (5*valor5) - (2*valor6))/1;
        printf("%d\n", N);
        printf("%d nota(s) de R$ 100,00\n", valor1);
        printf("%d nota(s) de R$ 50,00\n", valor2);
        printf("%d nota(s) de R$ 20,00\n", valor3);
        printf("%d nota(s) de R$ 10,00\n", valor4);
        printf("%d nota(s) de R$ 5,00\n", valor5);
        printf("%d nota(s) de R$ 2,00\n", valor6);
        printf("%d nota(s) de R$ 1,00\n", valor7);
    }
    else{
        return 0;
    }

    return 0;
}