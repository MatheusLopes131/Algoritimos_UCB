#include <stdio.h>

int main(){
    int N[9];
    int V;
    scanf ("%d", &V);
    printf ("N[0] = %d\n", V);

    for (int i = 1; i <= 9; i++){
        N[i] = V * 2;
        printf ("N[%d] = %d\n", i , N[i]);
        V = V * 2;
    }

    return 0;
}