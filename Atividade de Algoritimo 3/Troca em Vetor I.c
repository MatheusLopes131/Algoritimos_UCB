#include <stdio.h>

int main(){
    int N[20];

    for (int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }
    int p = 0;
    for (int u = 19; u >= 0; u--) {
        printf("N[%d] = %d\n", p, N[u]);
        p = p + 1;
    }

    return 0;
}