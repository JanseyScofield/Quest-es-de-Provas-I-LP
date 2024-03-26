#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int ano1,mes1,dia1,diasT1;
	int ano2,mes2,dia2,diasT2;
	scanf("%d %d %d", &ano1, &mes1, &dia1);
	scanf("%d %d %d", &ano2, &mes2, &dia2);
	
	diasT1 = (ano1*365) + (mes1*30) + dia1;
	diasT2 = (ano2*365) + (mes2*30) + dia2;
	
	if(diasT1 > diasT2)
		printf("A primeira pessoa é mais velha.");
	else
		printf("A segunda pessoa é mais velha.");
}
