#include <stdio.h>

void calcularSomaAtualiz(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    printf("Valores iniciais:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    calcularSomaAtualiz(&valorA, valorB);

    printf("Valores após a atualização:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
