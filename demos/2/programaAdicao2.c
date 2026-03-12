/* Programa Adiciona Números */
#include <stdio.h>
int main(void){
	int a, b, x;
	printf("\nInforme um valor para a variável 'a': "); scanf("%d", &a);
	printf("Informe um valor para a variável 'b': "); scanf("%d", &b);
	x = a + b;
	if (x > 10){
		printf("\nA variável 'x' é maior que 10.");
	} else {
		printf("\nA variável 'x' é menor ou igual a 10.");
	}
	printf("\nx equivale a %d.\n", x);
	return 0;
}
