#include <stdio.h>

int main() {
    int n;
    int i;
    int soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        soma = soma + i;
    }

    printf("Soma: %d\n", soma);

    return 0;
}