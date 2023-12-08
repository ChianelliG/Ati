#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ptrInteiro = &inteiro;
    float *ptrReal = &real;
    char *ptrCaractere = &caractere;

    printf("Valores iniciais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    *ptrInteiro = 20;
    *ptrReal = 2.71;
    *ptrCaractere = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
