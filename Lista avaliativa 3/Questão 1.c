#include <stdio.h>
#include <string.h>

int romanToDecimal(char romano[]) {
    int i, decimal = 0;
    int valores[26];


    valores['I' - 'A'] = 1;
    valores['V' - 'A'] = 5;
    valores['X' - 'A'] = 10;
    valores['L' - 'A'] = 50;
    valores['C' - 'A'] = 100;
    valores['D' - 'A'] = 500;
    valores['M' - 'A'] = 1000;


    for (i = 0; i < strlen(romano); i++) {
        if (i > 0 && valores[romano[i] - 'A'] > valores[romano[i - 1] - 'A']) {
            decimal += valores[romano[i] - 'A'] - 2 * valores[romano[i - 1] - 'A'];
        } else {
            decimal += valores[romano[i] - 'A'];
        }
    }

    return decimal;
}


void decimalparaBinario(int decimal) {
    if (decimal > 1) {
        decimalparaBinario(decimal / 2);
    }
    printf("%d", decimal % 2);
}

int main() {
    char romano[13];
    int decimal;

    scanf("%s", romano);

    decimal = romanToDecimal(romano);

    printf("%s na base 2: ", romano);
    decimalparaBinario(decimal);
    printf("\n%s na base 10: %d\n", romano, decimal);
    printf("%s na base 16: %x\n", romano, decimal);

    return 0;
}