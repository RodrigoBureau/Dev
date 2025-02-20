#include <stdio.h>

int main(){
    int num1;
    int num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1<num2){
        printf("---Crescente---\n");
        printf("%d\n", num1);
        printf("%d\n", num2);
        printf("---Decrescente---\n");
        printf("%d\n", num2);
        printf("%d", num1);
    }
    else{
        printf("---Crescente---\n");
        printf("%d\n", num2);
        printf("%d\n", num1);
        printf("---Decrescente---\n");
        printf("%d\n", num1);
        printf("%d", num2);
    }
}
