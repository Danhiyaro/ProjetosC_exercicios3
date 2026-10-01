#include <stdio.h>

int main() {
    int numero;
    int negativos = 0;
    int i;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            negativos++;
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);

    return 0;
}