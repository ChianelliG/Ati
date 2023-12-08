#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    trocar(&valorA, &valorB);

    printf("Após a troca:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
