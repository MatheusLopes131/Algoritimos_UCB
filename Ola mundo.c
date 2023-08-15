#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int medianotas;
    
printf ("Programa que calcula media de notas: \n");

printf ("Insira nota 1:");
scanf ("%d", &nota1);

printf ("Insira nota 2:");
scanf ("%d", &nota2);

printf ("Insira nota 3:");
scanf ("%d", &nota3);

medianotas = (nota1 + nota2 + nota3)/3;

printf("media: %d\n", medianotas);

}