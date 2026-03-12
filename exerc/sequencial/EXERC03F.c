/*f. Ler dois valores inteiros para A e B e efetuar a troca destes valores, de modo que a variável A passe a possuir o valor da B e a variável B passe a possuir o valor de A */
#include <stdio.h>
int main(void){
	int a, b, aux;
	printf("\nTroca de valores\n");
	printf("Digite A: "); scanf("%d", &a);
	printf("Digite B: "); scanf("%d", &b);
	
	aux = a;
	a = b;
	b = aux;
	
	printf("\nTroca efetuada! 'b' equivale a %d e 'a' equivale %d\n", b, a); 
	return 0;
}

