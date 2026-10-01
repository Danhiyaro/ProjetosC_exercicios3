#include <stdio.h>

int main() {
    int numero;
    int soma = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        soma = soma + numero;
    }

    printf("Soma total: %d\n", soma);

    return 0;
}