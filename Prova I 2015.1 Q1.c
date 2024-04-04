#include <stdio.h>

main(){
	int num, segundoD, terceiroD;
	int somaD;
	scanf("%d", &num);
	
	segundoD = (num%100)/10;
	terceiroD = (num%1000)/100;
	somaD = segundoD + terceiroD;
	
	printf("%d", somaD);
}
