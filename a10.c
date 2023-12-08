#include <stdio.h>

int main() {
    int array[5];

    int *ptr = array;

    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", ptr + i);
    }

    printf("O dobro de cada valor lido:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", *(ptr + i) * 2);
    }

    return 0;
}
