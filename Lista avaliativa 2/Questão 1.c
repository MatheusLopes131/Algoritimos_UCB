#include <stdio.h>

int main(){
    int Inicial[10];

    for (int i = 0; i < 10; i++){
        scanf("%d", &Inicial[i]);
        printf("%d", Inicial[i]);
        if (i < 9){
            printf(" ");
        }
    }
    printf("\n");

    int repeticoes = 0;
    int valores = 0;
    int numeros = 9;

    for (int i = 0; i < 10; i++){
        Inicial[i] = Inicial[i] + Inicial[i+1];
    }

    while(valores < 9){
        while(repeticoes < numeros){
            printf("%d", Inicial[repeticoes]);
            if (repeticoes < numeros - 1){
                printf(" ");
            }
            repeticoes++;
        }
        for (int i = 0; i < 10; i++){
            Inicial[i] = Inicial[i] + Inicial[i+1];
        }
        printf("\n");
        repeticoes = 0;
        valores++;
        numeros--;
    }

    return 0;
}