#include <stdio.h>

int main(){
    int i = 0;
    int nota;

    printf("Insira uma nota positiva:\n");
    scanf("%d", &nota);

    while(nota < 0){
        printf("Insira uma nota positiva:\n");
        scanf("%d", &nota);
    }

    printf("Nota lida: %d", nota);

    return 0;
}