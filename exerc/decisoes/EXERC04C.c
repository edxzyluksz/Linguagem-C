/* c. Ler quatro valores referentes a quatro notas escolares de um aluno e mostrar uma mensagem informando que o aluno foi aprovado se o valor da média for maior ou igual a 5. Também apresentar a média do aluno*/
#include <stdio.h>
int main (void){
	float a, b, c, d;
	printf("Digite a Nota 1 ....: "); scanf("%f", &a);
	printf("Digite a Nota 2 ....: "); scanf("%f", &b);
	printf("Digite a Nota 3 ....: "); scanf("%f", &c);
	printf("Digite a Nota 4 ....: "); scanf("%f", &d);
	float media = (a+b+c+d) / 4;
	printf("A média é %.2f\n", media);
	if (media >= 5) {
		printf("Aprovado!");
	} else {
		printf("Reprovado...");
	}
	printf("\n");
	return 0;
}
