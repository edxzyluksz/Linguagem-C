// Programa Adiciona Números

#include <stdio.h>

int main(void){
	int a, b, x;
	printf("Digite o valor de a: ");
	scanf("%d", &a);
	printf("Digite o valor de b: ");
	scanf("%d", &b);
	x = a + b;
	printf("O valor total foi: %d\n", x);
	return 0;		
}

/* A função scanf() possibilita efetuar a entrada de dados pelo teclado, usando uma sintaxe de expressão de controle seguida de uma lista de argumentos, sendo estes endereços de variáveis. */

/*
A expressão de controle contém códigos de formatação para o tipo de dados a ser processado, precedidos pelo sinal de porcentagem %.

Códigos de formatação:
%c% - Caracter único
%d% - Números inteiros decimais
%e% - Números em notação científica
%f% - Números reais (ponto flutuante)
%l% - Número inteiro longo, combinado com d ou f
%o% - Números octais
%s% - Sequência de caracteres (string)
%u% - Número decimal sem sinal
%x% - Número hexadecimal
%[abc]% - Filtra strings para que possuam somente os caracteres dentro dos colchetes (ou ^[abc] para ação contrária).
*/

/*
A lista de argumentos é a indicação dos endereços das variáveis em uso por meio do operador de endereço &, que possibilita retornar o conteúdo da variável. Caso não utilizado, será retornado o endereço de memória em que se encontra a variável.
*/
