#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int maior, menor;
    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        maior = num2;
        menor = num1;
    }

    int soma = num1 + num2;
    int diferenca = maior - menor;
    float media = (num1 + num2) / 2.0;
    int resto = maior % menor;

    printf("Soma: %d\n", soma);
    printf("Diferença entre o maior e o menor: %d\n", diferenca);
    printf("Média: %.2f\n", media);
    printf("Resto da divisão entre o maior e o menor: %d\n", resto);

    return 0;
}
