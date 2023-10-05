/******************************************************************************

2 - Escreva o Algoritmo que some todos os valores que você digitar e pare quando você    digitar 0.

*******************************************************************************/
#include <stdio.h>

int main() {
    int valor, soma = 0;
    
    do {
        printf("Digite um valor (ou 0 para encerrar): ");
        scanf("%d", &valor);
        soma += valor;
    } while (valor != 0);

    printf("A soma dos valores digitados é: %d\n", soma);

    return 0;
}
