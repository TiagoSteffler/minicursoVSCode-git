#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor1, valor2;
    float soma, media, modulo, diferenca;
    
    printf("Digite o primeiro valor: ");
    scanf("%f", &valor1);
    
    printf("Digite o segundo valor: ");
    scanf("%f", &valor2);
    
    // Soma
    soma = valor1 + valor2;
    printf("\nSoma: %.2f\n", soma);
    
    // Média simples
    media = (valor1 + valor2) / 2;
    printf("Média: %.2f\n", media);
    
    // Módulo do maior pelo menor
    float maior = (valor1 > valor2) ? valor1 : valor2;
    float menor = (valor1 < valor2) ? valor1 : valor2;
    
    if (menor != 0) {
        modulo = maior / menor;
        printf("Módulo (maior/menor): %.2f\n", modulo);
    } else {
        printf("Módulo (maior/menor): Divisão por zero!\n");
    }
    
    // Diferença positiva
    diferenca = (valor1 > valor2) ? (valor1 - valor2) : (valor2 - valor1);
    printf("Diferença positiva: %.2f\n", diferenca);
    
    return 0;
}