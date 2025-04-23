#include <stdio.h>

int main() {
    float notas[10];
    float soma = 0;
    int count = 0;
    float media;
    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite a nota do aluno %d (0 a 20): ", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 0 || notas[i] > 20) {
                printf("Nota inválida! Digite uma nota entre 0 e 20.\n");
            }
        } while (notas[i] < 0 || notas[i] > 20);

        soma += notas[i];
    }
    media = soma / 10;
    for (int i = 0; i < 10; i++) {
        if (notas[i] >= media) {
            count++;
        }
    }
    printf("\nA média das notas é: %.2f\n", media);
    printf("Número de alunos com nota igual ou acima da média: %d\n", count);

    return 0;
}
