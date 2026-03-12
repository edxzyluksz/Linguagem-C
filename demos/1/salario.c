// Cálculo de Salário

#include <stdio.h>
int main(void){
	float ht, vh, pd, td, sb, sl;
	printf("Horas de trabalho (h): "); scanf("%f", &ht);
	printf("Valor da hora (R$): "); scanf("%f", &vh);
	printf("Percentual de desconto (%): "); scanf("%f", &pd);
	sb =  ht * vh;
	td = (pd/100) * sb;
	sl = sb - td;
	printf("O salário bruto é .. R$ %.2f\n", sb);
	printf("O desconto é ....... R$ %.2f\n", td);
	printf("O salário líquido é  R$ %.2f\n", sl);
}

/* Caracteres especiais do printf():

\" - Apresenta o símbolo de aspas onde é indicado
\? - Apresenta o símbolo de interrogação onde é indicado
\\ - Apresenta o símbolo de barra onde é indicado
\' - Apresenta o símbolo de apóstrofo onde é indicado
\0 - Gera um caracter nulo (zero)
\a - Gera um sinal de áudio (beep) no alto-falante
\b - Executa um retrocesso de espaço do ponto onde é indicado
\f - Gera um salto de página de formulário (uso de uma impressora)
\n - Gera uma nova linha a partir do ponto onde é indicado
\r - Gera um retorno de carro sem avanço de linha
\t - Gera um espaço de tabulação do ponto onde é indicado
\v - Gera a execução da tabulação vertical

*/
