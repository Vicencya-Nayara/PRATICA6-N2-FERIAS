#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
    int v[10];
    int i;

    printf("Digite 10 n�meros inteiros\n\n");
    printf("Informe os n�mero: ");
    
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v[i] = 1;
        } else {
            v[i] = -1;
        }
    }

    printf("Array com valores substitu�dos:\n");
    for(i = 0; i < 10; i++){
    	printf("%d\t", v[i]);
	}
    
    return 0;
}
