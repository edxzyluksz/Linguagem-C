/* Divisibilidade - Exemplo 1 */
#include <stdio.h>
int main(void){
	int n, r4, r5;
	printf("\nEntre um valor inteiro natural: ");
	scanf("%d", &n);
	r4 = n - 4 * (n / 4); // Ou simplesmente n % 4
	r5 = n - 5 * (n / 5); // n % 5
	if (r4 == 0 && r5 == 0){
		printf("Múltiplo comum de 4 e 5");
	} else {
		printf("Valor não divisível por 4 e 5.");
	}
	printf("\n");
	return 0;
}

