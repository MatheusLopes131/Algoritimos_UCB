#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int X[N];
    int menorvalor = 1000;
    int posicao = 1;

    for (int i = 0; i < N; i++){
        scanf("%d", &X[i]);
        if (X[i] < menorvalor){
            menorvalor = X[i];
            posicao = i;
        }
    }
    printf("Menor valor: %d\n", menorvalor);
    printf("Posicao: %d\n", posicao);

    return 0;
}