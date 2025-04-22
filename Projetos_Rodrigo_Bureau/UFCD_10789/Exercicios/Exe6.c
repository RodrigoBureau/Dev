#include <stdio.h>

int main() {
    char nome[100];
    float valor_compra, desconto, valor_final, percentual;

    printf("Digite o nome do cliente: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_compra);
    if (valor_compra <= 200.00) {
        percentual = 10;
    } else if (valor_compra <= 500.00) {
        percentual = 15;
    } else {
        percentual = 20;
    }
    desconto = valor_compra * percentual / 100;
    valor_final = valor_compra - desconto;
    printf("\n----- RESUMO DA COMPRA -----\n");
    printf("Cliente: %s", nome);
    printf("Valor da compra: %.2f euros\n", valor_compra);
    printf("Desconto aplicado: %.0f%%\n", percentual);
    printf("Valor do desconto: %.2f euros\n", desconto);
    printf("Valor a pagar: %.2f euros\n", valor_final);
    return 0;
}
