/* Ordenação Simples */
#include <stdio.h>
int main(void) {
	int a, b, x;
	printf("Informe o valor de 'a': "); scanf("%d%", &a);
	printf("Informe o valor de 'b': "); scanf("%d%", &b);
	if (a > b) {
		x = a;
		a = b;
		b = x;
	}
	printf("Os valores ordenados são %d e %d\n", a, b);
	return 0;
}
