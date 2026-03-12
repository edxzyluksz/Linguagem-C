/* Operador AND (&&) */
#include <stdio.h>
int main(void){
	int numero;
	printf("Digite um número entre 0 e 9: \n");
	scanf("%d", &numero);
	if (numero >= 0 && numero <= 9){
		printf("Valor válido!");
	}
	else{
		printf("Valor inválido!");
	}
	printf("\n");
	return 0;
}
