/* Arquivo de Cabeçalho - iso646.h */
#include <stdio.h>
#include <iso646.h> // permite substituir operadores lógicos por palavras
int main(void){
	int numero;
	printf("\nInforme um número entre 0 e 9:\n");
	scanf("%d", &numero);
	if (numero >= 0 and numero <= 9){
		printf("Valor na faixa de 0 a 9");
	} else {
		printf("Valor inválido.");
	}
	printf("\n");
	return 0;
}
