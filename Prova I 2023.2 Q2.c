/*Um algoritmo genético pode ser definido como uma técnica utilizada para encontrar soluções aproximadas em problemas de otimização e busca. Uma das operações utilizadas durante 
a execução de um algoritmo genético é a mutação por swap. Nesta operação um dos bits do algoritmo tem o valor trocado por seu complementar. Por exemplo, considerando a seguinte 
numeração de bits - b4b3b2b1b0 - o indivíduo 28 (11100) após a operação de swap que modifica o seu bit 3 passa a representar o indivíduo 20 (10100). 
Escreva um programa em C, que leia um indivíduo entre 0 e 35, e um valor de bit entre 0 e 4, aplique a operação de mutação por swap e escreva o novo inteiro gerado*/

#include <stdio.h>

main(){
	int num, resto, bit0, bit1, bit2,  bit3, bit4;
	int numSwap, bitSwap;
	scanf("%d",  &num);
	scanf("%d", &bitSwap);
	
	bit0  = num%2;
	resto = num/2;
	bit1 = resto%2;
	resto /= 2;
	bit2 = resto%2;
	resto /= 2;
	bit3 = resto%2;
	resto /= 2;
	bit4 = resto%2;
	
	switch(bitSwap){
		case 0:
			bit0=bit0==1?0:1;
			break;
		case 1:
			bit1=bit1==1?0:1;
			break;
		case 2:
			bit2=bit2==1?0:1;
			break;
		case 3:
			bit3=bit3==1?0:1;
			break;
		case 4:
			bit4=bit4==1?0:1;
	}
	numSwap = (bit4*16) + (bit3*8) + (bit2*4) + (bit1*2) + bit0;
	printf("%d", numSwap);
}
