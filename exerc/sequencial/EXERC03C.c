/* c. Ler uma temperatura em graus Celius e apresentá-la convertida em graus Fahrenheit */
#include <stdio.h>
int main(void){
	float celsius, fahrenheit;
	printf("\n--- Conversor Celsius para Fahrenheit ---\n");
	printf("Digite a temperatura em Celsius: "); scanf("%f", &celsius);
	fahrenheit = (9 * celsius + 160) / 5;
	printf("A temperatura %.2f°C se converte para %.2f°F\n", celsius, fahrenheit); 
	return 0;
}
