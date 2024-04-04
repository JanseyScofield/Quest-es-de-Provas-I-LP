/*O código de Gray é um sistema de código binário inventado por Frank Gray. O código é não ponderado onde de um número para outro apenas um bit varia. Este
sistema de codificação surgiu quando os circuitos lógicos digitais se realizavam com válvulas termoiônicas e dispositivos eletromecânicos. Os contadores necessitavam de
potências muito elevadas e geravam ruído quando vários bits modificavam-se simultaneamente. O uso do código Gray garantiu que qualquer mudança variaria apenas um bit.
Escreva um programa em C, que leia dois inteiros codificados em decimal entre 0 e 7 e verifique se eles são números POTENCIALMENTE sequenciais no código Gray. Por
exemplo, os números 4 (100) e 5 (101) são números potencialmente sequenciais no código Gray, no entanto 5 (101) e 6 (110) não são*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int num1,  b11, b21, b31;
	int num2,  b12, b22, b32;
	int c, resto;
	
	scanf("%d %d", &num1, &num2);
	
	b31 = num1%2;
	resto = num1/2;
	b21 = resto%2;
	resto /= 2;
	b11 = resto%2;
	
	b32 = num2%2;
	resto = num2/2;
	b22 = resto%2;
	resto /= 2;
	b12 = resto%2;
	
	c = b11 != b12?1:0;
	c += b21 != b22?1:0;
	c += b31 != b32?1:0;
	
	if(c == 1){
		printf("São, potencialmente, sequências no código Gray.");
	}
	else{
		printf("Não são sequências no código Gray.");
	}
	
}
