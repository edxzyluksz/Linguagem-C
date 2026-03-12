/* Calcula média escolar */
#include <stdio.h>
int main (void){
	float n1, n2, n3, n4, md;
	printf("\nEntre a Nota 1 ...: "); scanf("%f", &n1);
	printf("\nEntre a Nota 2 ...: "); scanf("%f", &n2);
	printf("\nEntre a Nota 3 ...: "); scanf("%f", &n3);
	printf("\nEntre a Nota 4 ...: "); scanf("%f", &n4);
	md = (n1 + n2 + n3 + n4) / 4;
	if (md >= 5) {
		printf("Aluno aprovado com média = ");
	}
	else {
		printf("Aluno reprovado com média = ");
	}
	printf("%5.2f\n", md);
	return 0;
}
