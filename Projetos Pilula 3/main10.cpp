#include <stdio.h>

int main() {
    int n;
    int numero = 1;
    int contador = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    while (contador < n) {
        printf("%d\n", numero);

        numero = numero + 2;
        contador++;
    }

    return 0;
}