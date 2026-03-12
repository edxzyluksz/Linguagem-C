/* e. Calcular e apresentar o valor de um cilindro, utilizando a fórmula matemática tradicional. */
#include <stdio.h>
int main(void){
	const double PI = 3.141592;
	float raio, altura; 
	printf("\n=== Calculadora de Volume - Cilindro ===\n");
	printf("Defina o raio da superfície circular (em metros): "); scanf("%f", &raio);
	printf("Defina a altura (em metros) do cilindro: "); scanf("%f", &altura);
	float volume = ((raio * raio) * PI) * altura;
	printf("\nO volume encontrado foi: %.2f m³\n", volume);
	return 0;
}
