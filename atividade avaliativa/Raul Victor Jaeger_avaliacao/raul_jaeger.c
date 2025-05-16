#include <stdio.h>
#include <stdlib.h>

float add(float n1, float n2) {
    return n1 + n2;
}

float diferenca(float n1, float n2) {
    return abs(n1 - n2);
}

float media(float n1, float n2) {
    return (n1 + n2) / 2;
}

int resto(int n1, int n2) {
    if (n1 < n2) {
        return n2 % n1;
    } else {
        return n1 % n2;
    }
}

int main() {
    float soma, dif, med;
    int rest;

    float n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);   

    soma = add(n1, n2);
    dif = diferenca(n1, n2);
    med = media(n1, n2);

    rest = resto((int)n1, (int)n2);
    
    printf("-------------------------\n");

    printf("Soma: %.2f\n", soma);
    printf("Diferença: %.2f\n", dif);
    printf("Média: %.2f\n", med);
    printf("Resto: %d\n", rest);

    return 0;
}
