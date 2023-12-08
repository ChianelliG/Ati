#include <stdio.h>

int main() {
    int var1, var2;

    var1 = 10;
    var2 = 20;

    int *ptrVar1 = &var1;
    int *ptrVar2 = &var2;

    if (ptrVar1 > ptrVar2) {
        printf("O endereo de var1 (%p) e maior do que o endereco de var2 (%p)\n", (void*)ptrVar1, (void*)ptrVar2);
    } else if (ptrVar1 < ptrVar2) {
        printf("O endereco de var2 (%p) e maior do que o endereco de var1 (%p)\n", (void*)ptrVar2, (void*)ptrVar1);
    } else {
        printf("Os enderecos de var1 e var2 são iguais (%p)\n", (void*)ptrVar1);
    }

    return 0;
}
