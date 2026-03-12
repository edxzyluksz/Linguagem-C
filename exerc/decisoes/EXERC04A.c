/* a. Ler três valores inteiros a, b, c. O programa deve apresentar os valors dispostos em ordem crescente. Sugestão: Troca de valores para ordenar. */
#include <stdio.h>
int main(void){
	int a, b, c, temp;
	printf("\nDigite valor A: "); scanf("%d", &a);
	printf("Digite valor B: "); scanf("%d", &b);
	printf("Digite valor C: "); scanf("%d", &c);
	if (a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c){
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c){
		temp = c;
		c = b;
		b = temp;
	}
	printf("O conjunto {a, b, c} ordenados, são: {%d, %d, %d}", a, b, c);
	printf("\n");
	return 0;
}
