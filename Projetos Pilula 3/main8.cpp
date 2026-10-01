#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    while (1) {
        printf("Digite um numero (0 para parar): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        }

        soma = soma + numero;
    }

    printf("Soma total: %d\n", soma);

    return 0;
}