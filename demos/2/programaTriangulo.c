/* Checa Triângulo */
#include <stdio.h>
int main(void){
	float a, b, c;
	printf("\nInforme o lado A: "); scanf("%f", &a);
	printf("\nInforme o lado B: "); scanf("%f", &b);
	printf("\nInforme o lado C: "); scanf("%f", &c);
	printf("\n");
	if ((a < b+c) && (b < a+c) && (c < a+b)){
		if (a == b && b == c) {
			printf("Triâgulo Equilátero");
		} else if (a == b || a == c || b == c) {
			printf("Triângulo Isósceles");
		} else {
			printf("Triângulo Escaleno");
		}
	}
	else {
		printf("Estes valores não formam um triângulo...");
	}
	printf("\n");
	return 0;
}
