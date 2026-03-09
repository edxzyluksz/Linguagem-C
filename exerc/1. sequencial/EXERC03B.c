/*b. Efetuar o cálculo de quantidade de litros de combustível gasta em uma viagem. O programa deve apresentar os valores da velocidade média, tempo gasto, a distância percorrida e a quantidade de litros utilizada na viagem */

#include <stdio.h>
int main(void){
	float horas, velocidade, gastoCarro, distancia;
	printf("Quantas tempo foi gasto na viagem? (em horas) R: "); scanf("%f", &horas);
	printf("Qual a velocidade média em que o veículo percorria? (km/h) R: "); scanf("%f", &velocidade);
	printf("Quantos quilômetros demandam 1L de combustível do veículo? R: "); scanf("%f", &gastoCarro);
	distancia = velocidade * horas;
	float litros_usados = distancia / gastoCarro;
	printf("\nO veredito é...\n");
	printf("Velocidade média de %.2f km/h, com tempo gasto de %.2f h e gasto de 1L a cada %.2f quilômetros", velocidade, horas, gastoCarro);
	printf("\n===\n");
	printf("Uma viagem que percorreu cerca de %.2f km e demandou %.2f litros de combustível gasto no total.\n", distancia, litros_usados);  
	return 0;
}
