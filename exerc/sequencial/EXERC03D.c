/* d. Ler uma temperatura em graus Fahrenheit e apresentá-la em Celsius. */
#include <stdio.h>
int main(void){
	float fahrenheit, celsius;
	printf("\n=== Conversor Fahrenheit para Celsius ===\n"); 
	printf("Escreva a temperatura em Fahrenheit: "); scanf("%f", &fahrenheit);
	celsius = ((fahrenheit - 32) * 5) / 9;
	printf("A temperatura %.2f°F se converte para %.2f°C\n", fahrenheit, celsius);
	return 0;
}
