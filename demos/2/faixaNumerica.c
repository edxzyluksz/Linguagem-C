/* Adiciona números versão 2 */
#include <stdio.h>
int main(void){
	int a, b, x;
	printf("Informe um valor para a variável 'a': "); scanf("%d", &a);
	printf("Informe um valor para a variável 'b': "); scanf("%d", &b);
	x = a + b;
	printf("\nO resultado equivale a: ");
	if (x >= 10){
		printf("%d", x + 5);
	}
	else {
		printf("%d", x - 7);
	}
	printf("\n");
	return 0;
}
