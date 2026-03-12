/* Efeturar a leitura de três valores a, b, c para calcular a equação do segundo grau. lembre-se que somente será uma equação de segundo grau se o valor a for diferente de zero. Outro detalhe é que somente existirá o cálculo das raízes se o valor de delta for diferente de zero. É necessário considerar também o fato de o valor de delta ser igual a zero. Se isso ocorrer, existirá apenas o cálculo de uma raíz. Sugestão: biblioteca math.h
*/
#include <stdio.h>
#include <math.h>

int main(void){
	int a, b, c;
	printf("\n=== Equação Quadrática ===\n");
	printf("Digite A: "); scanf("%d", &a);
	
	if (a == 0){
		printf("Esta não é uma equação quadrática.\n");
		return 0;	
	}
	
	printf("Digite B: "); scanf("%d", &b);
	printf("Digite C: "); scanf("%d", &c);
	printf("\n");
	
	float delta = (b*b) - 4 * a * c;
	float x1, x2;
	
	if (delta < 0) {
		printf("Erro: Não existem raízes reais para esta equação.");
		return 0;
	}
	
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	
	if (delta > 0) {
    printf("As raízes são: %f e %f", x1, x2);
	} else {
    printf("Resultado: %f", x1);
  }
	
	printf("\n");
	return 0;
}
