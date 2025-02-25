#include <stdio.h>

int main(){
    float saldo_inicial;
    float cheque;
    float saldo_final;
    printf("Diga o seu saldo inicial: ");
    scanf("%f", &saldo_inicial);
    printf("Diga o valor do cheque: ");
    scanf("%f", &cheque);
    if (saldo_inicial>=cheque){
        saldo_final = saldo_inicial - cheque;
        printf("O saldo inicial cobre o cheque e sobra: %.2f euros", saldo_final);
    }
    else{
        saldo_final = cheque - saldo_inicial;
        printf("O saldo inicial nao cobre o cheque e ainda falta %.2f euros", saldo_final);
    }

}
