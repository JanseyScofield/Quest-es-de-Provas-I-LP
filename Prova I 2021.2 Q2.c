/*O código de confirmação de uma transação bancária é calculada considerando os quatro dígitos finais do cartão e o horário da transação no formato HHMM. Para o cálculo, são 
gerados dois números considerando para o primeiro os maiores numerais de cada posição, e para o segundo o menor númeral de cada posição. Em seguida, o menor número é subtraído 
do maior e seu invertido é gerado. Este último valor é o código de confirmação da transação. Por exemplo, para o cartão 4392 e uma transação realizada às 12:15, o código de 
confirmação será igual a 3813; calculado da seguinte forma: 4395 - 1212 = 3183, que quando invertido, gera o número 3813.
Escreva um programa em C, que leia um número de quatro dígitos do cartão e um outro representando o horário no formato HHMM e imprima o código de confirmação calculado.O código 
de confirmação de uma transação bancária é calculada considerando os quatro dígitos finais do cartão e o horário da transação no formato HHMM. Para o cálculo, são gerados dois 
números considerando para o primeiro os maiores numerais de cada posição, e para o segundo o menor númeral de cada posição. Em seguida, o menor número é subtraído do maior e seu 
invertido é gerado. Este último valor é o código de confirmação da transação.
Por exemplo, para o cartão 4392 e uma transação realizada às 12:15, o código de confirmação será igual a 3813; calculado da seguinte forma: 4395 - 1212 = 3183, que quando 
invertido, gera o número 3813.
Escreva um programa em C, que leia um número de quatro dígitos do cartão e um outro representando o horário no formato HHMM e imprima o código de confirmação calculado.*/

#include <stdio.h>

main(){
	int codigoCar, hora;
	int codigoConf, mConf, dConf, cConf, uConf;
	int maiorM, maiorC, maiorD, maiorU, maiorN;
	int menorM, menorC, menorD, menorU, menorN;
	
	scanf("%d", &codigoCar);
	scanf("%d", &hora);
	
	if(codigoCar/1000 > hora/1000){
		maiorM = codigoCar/1000;
		menorM = hora/1000;
	}
	else{
		maiorM = hora/1000;
		menorM  = codigoCar/1000;
	}
	
	if(codigoCar%1000/100 > hora%1000/100){
		maiorC = codigoCar%1000/100;
		menorC = hora%1000/100;
	}
	else{
		maiorC = hora%1000/100;
		menorC  = codigoCar%1000/100;
	}
	
	if(codigoCar%100/10 > hora%100/10){
		maiorD = codigoCar%100/10;
		menorD = hora%100/10;
	}
	else{
		maiorD = hora%100/10;
		menorD  = codigoCar%100/10;
	}
	
	if(codigoCar%10 > hora%10){
		maiorU = codigoCar%10;
		menorU = hora%10;
	}
	else{
		maiorU = hora%10;
		menorU  = codigoCar%10;
	}
	maiorN = (maiorM*1000) + (maiorC*100) + (maiorD*10) + maiorU;
	menorN = (menorM*1000) + (menorC*100) + (menorD*10) + menorU;
	codigoConf = maiorN - menorN;

	mConf = codigoConf/1000;
	cConf = codigoConf%1000/100;
	dConf = codigoConf%100/10;
	uConf = codigoConf%10;
	
	codigoConf = (uConf*1000) + (dConf*100) + (cConf*10) + mConf;
	printf("%d", codigoConf);
}
