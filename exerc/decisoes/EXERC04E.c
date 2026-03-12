/* e. Ler dois valores numéricos inteiros ou reais e exibir a diferença do maior para o menor */
#include <stdio.h>
int main(void){
	int a, b;
	printf("Digite o valor de 'a': "); scanf("%d", &a);
	printf("Digite o valor de 'b': "); scanf("%d", &b);
	
	int diferenca = a - b;
	if (b > a) {
		diferenca = -diferenca;
	}
	
	printf("A diferença entre os dois valores é de %d\n", diferenca);
	return 0;
}
