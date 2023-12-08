#include <stdio.h>

int somaDobroAtualiza(int *a, int *b) {
    int somaDobro = 2 * (*a) + 2 * (*b);
    *a = 2 * (*a);
    *b = 2 * (*b);
    return somaDobro;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    int resultado = somaDobroAtualiza(&valorA, &valorB);

    printf("Soma do dobro de A e B: %d\n", resultado);
    printf("Valor de A após a atualização: %d\n", valorA);
    printf("Valor de B após a atualização: %d\n", valorB);

    return 0;
}
