/*Computadores são autômatos com a capacidade de realizar cálculos muito rapidamente. Contudo, nem todo cálculo pode ser feito num computador, pois, por uma limitação física de
recursos, ele não consegue representar todos os números dentro de sua memória. Por exemplo, em um computador cujo tipo inteiro seja representado por 64 bits, o maior inteiro 
que se pode representar é 4.294.967.295. 
Caso alguma conta executada pelo computador dê um resultado acima desse número, ocorrerá oque chamamos de overflow, que é quando o computador faz uma conta e o resultado não pode
ser representado, por ser maior do que o valor máximo permitido (em inglês overflow significa transbordar). Por exemplo, se um computador só pode representar números menores do 
que 256 e mandamos ele executar a conta 250 + 8, vai ocorrer overflow. Sua tarefa é escrever um programa em C, que leia um inteiro, indicando o maior número que um computador 
consegue representar, e, uma expressão codificada por um inteiro de até 7 dígitos, onde os três menos significativos, compõem o segundo operando, o quarto dígito menos
significativo codifica a operação desejada (1 - para adição, 2 - para subtração, 3 - para multiplicação, 4 - para divisão), os restantes mais significativos compõem o primeiro 
operando e indique o resultado da operação ou se ocorrerá overflow. Por exemplo, para um computador cujo maior inteiro seja 256, e a expressão de entrada seja 2501008, a saída 
indicará overflow. Mas, se a entrada for 502008, a saída deverá ser 42.
*/

#include <stdio.h>

main(){
	int num, primeiroOper, segundoOper, operacaoEsco;
	int numMax, resultado;
	scanf("%d", &numMax);
	scanf("%d", &num);
	
	primeiroOper  = num/10000;
	operacaoEsco = num%10000/1000;
	segundoOper = num%1000;
	
	switch (operacaoEsco){
		case 1:
			resultado = primeiroOper + segundoOper;
			break;
		case 2:
			resultado = primeiroOper - segundoOper;
			break;
		case 3:
			resultado = primeiroOper * segundoOper;
			break;
		case 4:
			resultado = primeiroOper / segundoOper;
	}
	
	if (resultado > numMax){
		printf("Overflow");
	}
	else{
		printf("%d", resultado);
	}
	
}
