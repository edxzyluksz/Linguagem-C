/* Operador NOT (!) */
#include <stdio.h>
int main(void){
	int valor;
	printf("\nEntre um valor inteiro positivo: ");
	scanf("%d", &valor);
	if (!(valor >= 0)){
		printf("Valor inválido!");
	} 
	else {
		printf("Valor válido, você informou %d.", valor);
	}
	printf("\n");
	return 0;
}
