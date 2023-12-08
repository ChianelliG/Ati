#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor para var1: ");
    scanf("%d", &var1);

    printf("Digite o valor para var2: ");
    scanf("%d", &var2);

    int *ptrVar1 = &var1;
    int *ptrVar2 = &var2;

    if (ptrVar1 > ptrVar2) {
        printf("Conteudo da variavel no maior endereco: %d\n", *ptrVar1);
    } else if (ptrVar1 < ptrVar2) {
        printf("Conteudo da variavel no maior endereco: %d\n", *ptrVar2);
    } else {
        printf("Os enderecos de var1 e var2 sao iguais.\n");
    }

    return 0;
}
