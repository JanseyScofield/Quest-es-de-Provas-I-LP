/*Escreva um algoritmo em linguagem C que leia um número de até três dígitos (menorou igual a (777)8) em octal (sistema de numeração base 8) e escreva o seu equivalente
em base 10. Por exemplo, o número (435)8, equivale ao número (285)10. (4*82 + 3*81 +5*80 = 4*64+ 3*8+5*1=256+24+5=285). Demonstre um teste de mesa considerando os
valores indicados (entrada = 435; saída=285).*/

#include <stdio.h>

main(){
	int num8,  num10;
	int alg1, alg2, alg3;
		
	scanf("%d",&num8);
	
	alg1 = num8/100;
	alg2 = num8%100/10;
	alg3 = num8%10;
	
	num10 = (alg1*64) + (alg2*8) + alg3;
	printf("%d", num10);
}
