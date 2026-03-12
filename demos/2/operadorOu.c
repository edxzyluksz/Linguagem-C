/* Operador OU (||) */
#include <stdio.h>
int main(void){
	int codigo;
	printf("\nEntre o código de acesso: \n");
	scanf("%d", &codigo);
	if (codigo == 1 || codigo == 2 || codigo == 3){
		if (codigo == 1){
			printf("Um...");
		}
		if (codigo == 2){
			printf("Dois...");
		}
		if (codigo == 3){
			printf("Três");
		}
		printf("\n");
	}
	else {
		printf("Código inválido!\n");
	}
	return 0;
}
