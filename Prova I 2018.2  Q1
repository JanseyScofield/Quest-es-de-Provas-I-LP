/*- Carl aprendeu recentemente o que é o sistema binário. Ele aprendeu, por exemplo, que a 
representação binária de um inteiro positivo k é uma string anan−1...a1a0 onde cada ai é um dígito binário 
0 ou 1, iniciando com an = 1, e de tal forma que k = Σ ai × 2^i.
César, o irmão mais velho de Carl, resolveu lhe propor um desafio: "Olhe Carl, eu tenho uma pergunta 
fácil para você: eu te darei um valor inteiro, e você tem que me diz quantos dígitos 1 existem na 
representação binária deste número. Se prepare!". Carl aceitou o desafio.
Para ajudar Carl, você deve escrever um algoritmo em C, que o ajude nesta tarefa. O algoritmo deverá 
ler um inteiro entre 0 e 32 e imprimir o total de dígitos 1 existentes no número.*/

#include <stdio.h>

main(){
	int num10, bit5, bit4, bit3, bit2, bit1, resto, c;
	
	scanf("%d", &num10);
	
	bit5 = num10%2;
	resto = num10/2;
	bit4 = resto%2;
	resto /= 2;
	bit3 = resto%2;
	resto /= 2;
	bit2 = resto%2;
	resto /= 2;
	bit1 = resto%2;
	
	c = bit5 == 1?1:0;
	c = bit4 == 1?c+1:c;
	c = bit3 == 1?c+1:c;
	c = bit2 == 1?c+1:c;
	c = bit1 == 1?c+1:c;
	
	printf("%d", c);
}
