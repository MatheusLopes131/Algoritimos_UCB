#include <stdio.h>

int main(){
    int senha;
    scanf("%d", &senha);
    printf("senha cadastrada: %d\n", senha);
    int i = 0;
    int senhainserida;

    while(i == 0){
        scanf ("%d", &senhainserida);
        if(senhainserida != senha){
            printf("senha invalida!\n");
        }
        else if(senhainserida == senha){
            printf("senha valida!\n");
            i++;
        }
    }

    return 0;
}