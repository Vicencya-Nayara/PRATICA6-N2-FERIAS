#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese_Brazil");
	
	float v[10];
	
	for(int i=0; i<10; i++){
		printf("Digite um número: ");
		scanf("%f", &v[i]);
	}
	printf("\nNúmeros cujo os índices é par\n");
	for(int j=0; j<10; j++){
		if(j%2==0 && j!=0){
			printf("%.2f\n", v[j]);
		}
	}
	return 0;
}
