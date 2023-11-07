#include <stdio.h>
#include <string.h>

int main(){
    char time1[20];
    char jogador[50];
    float pontos1[11];
    float pontos2[11];
    char time2[20];
    double força1;
    double força2;

    fgets(time1, 20, stdin);
    time1[strcspn(time1, "\n")] = '\0';

    for(int i = 0; i < 11; i++) {
        scanf("%199[^;];%*c;%f", jogador, &pontos1[i]);
    }

    int c;
    while ((c = getchar()) != '\n' && c != EOF);

    fgets(time2, 20, stdin);
    time2[strcspn(time2, "\n")] = '\0';

    for(int i = 0; i < 11; i++) {
        scanf("%199[^;];%*c;%f", jogador, &pontos2[i]);
    }

    força1 = (8*pontos1[0] + 10*(pontos1[1]+pontos1[4]) + 5*(pontos1[2]+pontos1[3]) + 8*(pontos1[5]+pontos1[6]) + 11*(pontos1[7]+pontos1[8]) + 12*(pontos1[9]+pontos1[10]))/100;
    força2 = (8*pontos2[0] + 10*(pontos2[1]+pontos2[4]) + 5*(pontos2[2]+pontos2[3]) + 8*(pontos2[5]+pontos2[6]) + 11*(pontos2[7]+pontos2[8]) + 12*(pontos2[9]+pontos2[10]))/100;

    printf("%s: %.2lf de forca\n", time1, força1);
    printf("%s: %.2lf de forca\n", time2, força2);

    if(força1 > força2){
        printf("%s eh mais forte\n", time1);
    }
    else{
        printf("%s eh mais forte\n", time2);
    }

    return 0;
}