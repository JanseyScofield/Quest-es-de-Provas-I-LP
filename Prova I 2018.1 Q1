#include <stdio.h>

main(){
	int num1,b1,b2,b3,b4,b5,resto;
	int pararidade,numNovo,numN2;
	scanf("%d",  &num1);
	b5 = num1%2;
	resto = num1/2;
	b4 = resto%2;
	resto/=2;
	b3 = resto%2;
	resto /=2;
	b2 = resto%2;
	resto /=2;
	b1 = resto%2;
	
	pararidade = (b1+b2+b3+b4+b5)%2;
	if (pararidade != 0){
		numNovo = (b1*32) + (b2*16) + (b3*8) + (b4*4) + (b5*2) + 1;
		numN2 = (b1*100000) + (b2*10000) + (b3*1000) + (b4*100) + (b5*10) + 1;
	}
	else {
		numNovo = (b1*32) + (b2*16) + (b3*8) + (b4*4) + (b5*2);
		numN2 = (b1*100000) + (b2*10000) + (b3*1000) + (b4*100) + (b5*10);	
	}
	printf("%d=(%d)2", numNovo,numN2);
}
