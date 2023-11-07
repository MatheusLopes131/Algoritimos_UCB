#include <stdio.h>
#include <string.h>

int main(){
    int numeros1[4][4];
    int numeros2[4][4];
    int resultado[4][4];
    char operacao[10];

    int mult = 0;

    for(int u = 0; u < 4; u++){
        for(int i = 0; i < 4; i++){
            scanf("%d", &numeros1[u][i]);
        }
    }

    for(int u = 0; u < 4; u++){
        for(int i = 0; i < 4; i++){
            scanf("%d", &numeros2[u][i]);
        }
    }

    scanf("%s", operacao);

    if(strcmp(operacao, "soma") == 0){
        for(int u = 0; u < 4; u++){
            for(int i = 0; i < 4; i++){
                resultado[u][i] = numeros1[u][i] + numeros2[u][i];
                printf("%4d", resultado[u][i]);
                if(i == 3){
                    printf("\n");
                }
            }
        }
    }

    else if(strcmp(operacao, "sub") == 0){
        for(int u = 0; u < 4; u++){
            for(int i = 0; i < 4; i++){
                resultado[u][i] = numeros1[u][i] - numeros2[u][i];
                printf("%4d", resultado[u][i]);
                if(i == 3){
                    printf("\n");
                }
            }
        }
    }

    else if(strcmp(operacao, "mult") == 0){
        for(int u = 0; u < 4; u++){
            for(int i = 0; i < 4; i++){
                resultado[u][i] = (numeros1[u][0] * numeros2[0][mult]) + (numeros1[u][1] * numeros2[1][mult]) + (numeros1[u][2] * numeros2[2][mult]) + (numeros1[u][3] * numeros2[3][mult]);
                printf("%4d", resultado[u][i]);
                if(i == 3){
                    printf("\n");
                }
                mult++;
            }
            mult = 0;
        }
    }

    return 0;
}