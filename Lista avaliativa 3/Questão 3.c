#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char placa[10];
    char dia[20];
    char hifen = '-';

    scanf("%s", placa);
    scanf("%s", dia);

    int tamanho = strlen(placa);
    char ultimodigito = placa[tamanho - 1];

    if (strchr(placa, hifen) != NULL && tamanho == 8 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
            isdigit(placa[4]) && isdigit(placa[5]) && isdigit(placa[6]) && isdigit(placa[7])){
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0){
            if (ultimodigito == '0' || ultimodigito == '1'){
                printf("%s nao pode circular segunda-feira\n", placa);
            } else {
                printf("%s pode circular segunda-feira\n", placa);
            }
        }
        else if (strcmp(dia, "TERCA-FEIRA") == 0){
            if (ultimodigito == '2' || ultimodigito == '3'){
                printf("%s nao pode circular terca-feira\n", placa);
            } else {
                printf("%s pode circular terca-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUARTA-FEIRA") == 0){
            if (ultimodigito == '4' || ultimodigito == '5'){
                printf("%s nao pode circular quarta-feira\n", placa);
            } else {
                printf("%s pode circular quarta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUINTA-FEIRA") == 0){
            if (ultimodigito == '6' || ultimodigito == '7'){
                printf("%s nao pode circular quinta-feira\n", placa);
            } else {
                printf("%s pode circular quinta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SEXTA-FEIRA") == 0){
            if (ultimodigito == '8' || ultimodigito == '9'){
                printf("%s nao pode circular sexta-feira\n", placa);
            } else {
                printf("%s pode circular sexta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0){
            printf("Nao ha proibicao no fim de semana\n");
        }
        else {
            printf("Dia da semana invalido\n");
        }
    }

    else if (tamanho == 7 && isalpha(placa[0]) && isalpha(placa[1]) && isalpha(placa[2]) &&
        isdigit(placa[3]) && isalpha(placa[4]) && isdigit(placa[5]) && isdigit(placa[6])){
        if (strcmp(dia, "SEGUNDA-FEIRA") == 0){
            if (ultimodigito == '0' || ultimodigito == '1'){
                printf("%s nao pode circular segunda-feira\n", placa);
            } else {
                printf("%s pode circular segunda-feira\n", placa);
            }
        }
        else if (strcmp(dia, "TERCA-FEIRA") == 0){
            if (ultimodigito == '2' || ultimodigito == '3'){
                printf("%s nao pode circular terca-feira\n", placa);
            } else {
                printf("%s pode circular terca-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUARTA-FEIRA") == 0){
            if (ultimodigito == '4' || ultimodigito == '5'){
                printf("%s nao pode circular quarta-feira\n", placa);
            } else {
                printf("%s pode circular quarta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "QUINTA-FEIRA") == 0){
            if (ultimodigito == '6' || ultimodigito == '7'){
                printf("%s nao pode circular quinta-feira\n", placa);
            } else {
                printf("%s pode circular quinta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SEXTA-FEIRA") == 0){
            if (ultimodigito == '8' || ultimodigito == '9'){
                printf("%s nao pode circular sexta-feira\n", placa);
            } else {
                printf("%s pode circular sexta-feira\n", placa);
            }
        }
        else if (strcmp(dia, "SABADO") == 0 || strcmp(dia, "DOMINGO") == 0){
            printf("Nao ha proibicao no fim de semana\n");
        }
        else {
            printf("Dia da semana invalido\n");
        }
    }
    else {
        printf("Placa invalida\n");
        if (strcmp(dia, "SEGUNDA-FEIRA") != 0 && strcmp(dia, "TERCA-FEIRA") != 0 && strcmp(dia, "QUARTA-FEIRA") != 0 &&
        strcmp(dia, "QUINTA-FEIRA") != 0 && strcmp(dia, "SEXTA-FEIRA") != 0 && strcmp(dia, "SABADO") != 0 && strcmp(dia, "DOMINGO") != 0){
            printf("Dia da semana invalido\n");
        }
    }

    return 0;
}