#include <stdio.h>

int main(){
    int L;
    char T;
    scanf("%d", &L);
    scanf(" %c", &T);
    float M[12][12];
    int u = 0;
    int c = 0;

    for (int i = 1; i <= 144; i++){
        scanf("%f", &M[u][c]);
        c++;
        if (c >= 12){
            u++;
            c = 0;
        }
    }
    c = 0;
    if (T == 'S'){
        float S = 0;
        for (int i2 = 0; i2 < 12; i2++){
            S = S + M[L][c];
            c++;
        }
        printf("%.1f\n", S);
    }
    c = 0;
    if (T == 'M'){
        float m = 0;
        for (int i3 = 0; i3 < 12; i3++){
            m = m + M[L][c];
            c++;
        }
        m = m/12;
        printf("%.1f\n", m);
    }
    return 0;
}