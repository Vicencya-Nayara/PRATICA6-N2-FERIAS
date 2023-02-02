#include <stdio.h>
#include <locale.h>
#define pares 10

int main() {
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
    int i;
    int numeros[pares];

    printf("Entre com 10 números inteiros:\n");
    for (i = 0; i < pares; i++) {
        scanf("%d", &numeros[i]);
    }

    printf("\nNúmeros pares na ordem inversa:\n");
    for (i = pares - 1; i >= 0; i--) {
        if (numeros[i] % 2 == 0) {
            printf("%d\n", numeros[i]);
        }
    }

    return 0;
}

