#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    char progressao[5];
    int algarismos;
    int razao;
    double FormulaDoTermoGeral;
    double SomaDosTermos;
    int valores[2];
    char respostaposicao[5];
    int posicaovalor;
    int resposta2posicao;


    printf("Qual a progressao que iremos usar: PA ou PG?\n");
    scanf("%s", &progressao);


    if(strcmp(progressao, "PA") == 0 || strcmp(progressao, "pa") == 0){
        printf("Quantos algarismos tem na Progressao Aritmetica?\n");
        scanf("%d", &algarismos);
        printf("Insira o primeiro valor:\n");
        scanf("%d",&valores[0]);
        printf("Insira o segundo valor:\n");
        scanf("%d",&valores[1]);
        razao = valores[1] - valores[0];
        FormulaDoTermoGeral= valores[0] + (algarismos - 1) * razao;
        SomaDosTermos = (algarismos*(valores[0]+FormulaDoTermoGeral))/2;

        printf("O resultado da formula do termo geral e %.0lf\n", FormulaDoTermoGeral);
        printf("A soma dos termos da PA e %.0lf\n", SomaDosTermos);

        printf("Voce deseja achar um valor dessa progressao?\n");
        scanf("%s" ,respostaposicao);

        if(strcmp(respostaposicao, "Sim") == 0 || strcmp(respostaposicao, "sim") == 0 || strcmp(respostaposicao, "s") == 0){
            printf("Insira qual posicao de valor voce deseja encontrar:\n");
            scanf("%d", &posicaovalor);

            for (int i = 1; i < posicaovalor; i++){
               resposta2posicao = valores[0] + razao;
               valores[0] = resposta2posicao;
            }
            printf("O valor do termo %d e %d\n", posicaovalor, resposta2posicao);
        }
    }


    if(strcmp(progressao, "PG") == 0 || strcmp(progressao, "pg") == 0){
        printf("Quantos algarismos tem na Progressao Geometrica?\n");
        scanf("%d", &algarismos);
        printf("Insira o primeiro valor:\n");
        scanf("%d",&valores[0]);
        printf("Insira o segundo valor:\n");
        scanf("%d",&valores[1]);
        razao = valores[1] / valores[0];
        FormulaDoTermoGeral= valores[0] * pow(razao, algarismos - 1);
        SomaDosTermos = valores[0]*(pow(razao,algarismos)-1)/ (razao - 1);

        printf("O resultado da formula do termo geral e %.0lf\n", FormulaDoTermoGeral);
        printf("A soma dos termos da PA e %.0lf\n", SomaDosTermos);
    }


    return 0;
}