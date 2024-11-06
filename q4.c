#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário um número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcula o quadrado do número
    int quadrado = numero * numero;

    // Exibe o resultado
    printf("O quadrado de %d é %d\n", numero, quadrado);

    return 0;
}
