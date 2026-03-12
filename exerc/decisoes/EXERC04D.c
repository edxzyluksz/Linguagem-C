/* d. Ler quatro valores referentes a quatro notas escolares de um aluno e apresentar uma mensagem informando que o aluno foi aprovado se o valor for maior ou igual a 7. Se o valor da média for menor que 7, solicitar a nota de exame, somar com o valor da média e obter nova média. Se a nova média for maior ou igual a 5, apresentar uma mensagem informando que o aluno foi aprovado em exame. Se o aluno não foi aprovado, mostrar uma mensagem informando esta condição. Mostrar junto com as mensagens o valor da média do aluno. */
#include <stdio.h>
int main(void){

	float n1, n2, n3, n4;
	printf("Informe a nota 1: "); scanf("%f", &n1);
	printf("Informe a nota 2: "); scanf("%f", &n2);
	printf("Informe a nota 3: "); scanf("%f", &n3);
	printf("Informe a nota 4: "); scanf("%f", &n4);
	float media = (n1 + n2 + n3 + n4) / 4;
	printf("Sua média foi: %.2f\n", media);
	if (media >= 7){
		printf("Parabéns, você foi aprovado!");
	} else {
		printf("ALERTA: Risco de reprovação!");
		float notaExame;
		printf("\nInsira a nota do exame: "); scanf("%f", &notaExame);
		float novaMedia = (media + notaExame) / 2;
		printf("Sua nova média foi: %.2f\n", novaMedia);
		if (novaMedia >= 5) {
			printf("Você conseguiu ser aprovado!");
		} else {
			printf("Infelizmente, você não foi aprovado.");
		}
	}
	printf("\n");
	return 0;
}
