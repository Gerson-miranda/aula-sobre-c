#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário que digite a idade
    printf("Digite a idade: ");
    scanf("%d", &idade);

    // Verifica a faixa etária e imprime a categoria
    if (idade >= 0 && idade <= 12) {
        printf("Você é uma criança.\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Você é um adolescente.\n");
    } else if (idade >= 18) {
        printf("Você é um adulto.\n");
    } else {
        printf("Idade inválida.\n");
    }

    return 0;
}
