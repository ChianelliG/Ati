#include <stdio.h>

// Função para ajustar o conteúdo das variáveis
void ajustarValores(int *a, int *b) {
    if (*a < *b) {
        // Troca os valores se a for menor que b
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    ajustarValores(&valorA, &valorB);

    printf("Valores ajustados:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
