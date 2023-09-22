#include <stdio.h>

int main(){
    int N;
    int X[N];
    scanf("%d", &N);
    int menorvalor = 1000;
    int posicao = 1;

    for (int i = 0; i < N; i++){
        scanf("%d", X[i]);
        if (X[i] < menorvalor){
            menorvalor = X[i];
        }
    }
    printf("Menor valor: %d\n", menorvalor);
    printf("Posicao: %d", posicao);

    /// Incompleto ///
    return 0;
}