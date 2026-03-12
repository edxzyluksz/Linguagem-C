/* 
a. Ler quatro valores numéricos inteiros e apresentar o resultado dois a dois da adição e multiplicação entre os valores obtidos
Ex: A + B, A * B /// A + C /// A * C (...)
No total, devem ser realizadas doze operações de processamento, sendo seis para adição e seis para multiplicação.
*/

#include <stdio.h>

int main(void){
	int a, b, c, d;
	printf("Digite o valor de a: "); scanf("%d", &a);
	printf("Digite o valor de b: "); scanf("%d", &b);
	printf("Digite o valor de c: "); scanf("%d", &c);
	printf("Digite o valor de d: "); scanf("%d", &d);
	
	printf("\n=== RESULTADOS ===\n");
	printf("Par '%d' com '%d'\n", a, b);
	printf("Soma: %d \nMultiplicação: %d\n\n", a+b, a*b);
	
	printf("Par '%d' com '%d'\n", a, c);
	printf("Soma: %d \nMultiplicação: %d\n\n", a+c, a*c);
	
	printf("Par '%d' com '%d'\n", a, d);
	printf("Soma: %d \nMultiplicação: %d\n\n", a+d, a*d);

	printf("Par '%d' com '%d'\n", b, c);
	printf("Soma: %d \nMultiplicação: %d\n\n", b+c, b*c);	
	
	printf("Par '%d' com '%d'\n", b, d);
	printf("Soma: %d \nMultiplicação: %d\n\n", b+d, b*d);
	
	printf("Par '%d' com '%d'\n", c, d);
	printf("Soma: %d \nMultiplicação: %d\n\n", c+d, c*d);
	
	return 0;
}

