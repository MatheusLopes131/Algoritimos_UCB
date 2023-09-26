#include <stdio.h>

int main(){

    int ano;
    scanf("%d",&ano);
    int resto = ano % 4;


    if (ano < 1896 || ano == 1916 || ano == 1940 || ano == 1942 || ano== 1944 || ano == 1946) {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n" , ano);
    }
    else if (resto == 0){
        printf("Os Jogos Olimpicos de Verao ocorreram no ano de %d.\n", ano);
    }
    else if (ano >= 1930 && resto == 2){
        printf("A Copa do Mundo de Futebol ocorreu no ano de %d.\n", ano);
    }
    else {
        printf("Nao houve Jogos Olimpicos de Verao ou Copa do Mundo no ano de %d.\n" , ano);
    }


    return 0;
}