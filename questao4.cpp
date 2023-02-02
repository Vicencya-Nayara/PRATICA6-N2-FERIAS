#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
    float arr[10];
    int i, j;
    float temp;

    printf("Digite 10 números reais:\n");

    for (i = 0; i < 10; i++) {
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Array ordenado em ordem crescente:\n");

    for (i = 0; i < 10; i++) {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
