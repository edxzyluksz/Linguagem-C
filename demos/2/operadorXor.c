/* Operador XOR (OU Exclusivo)
XOR = verdadeiro apenas se exatamente um for verdadeiro. */
#include <stdio.h>
int main(void){
	int s1, s2;
	printf("Entre o sexo do 1o. - [1] = M /// [0] = F\n");
	scanf("%d", &s1);
	printf("Entre o sexo do 2o. - [1] = M /// [0] = F\n");
	scanf("%d", &s2);
	if ((s1 == 1 && (!s2 == 1)) || ((!s1 == 1) && s2 == 1)) { // Poderia ser escrito também simplesmente: if (s1 != s2)
		printf("O 1o. pode dançar com o 2o.");
	} else {
		printf("O 1o. NÃO pode dançar com o 2o.");
	}
	printf("\n");
	return 0;
}
