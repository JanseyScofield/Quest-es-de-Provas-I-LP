/*Escreva um algoritmo em linguagem C que leia dois valores numéricos, representando um dia e um mês e escreva a data equivalente por extenso. Por exemplo, se os números
informados forem 02 e 06, a saída deverá ser ‘dois de junho’; caso a data informada seja 01 e 12, a saída deverá ser ‘primeiro de dezembro’.*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	int dia, mes, uniD,dezD;
	scanf("%d %d", &dia, &mes);
	
	uniD = dia%10;
	dezD = dia/10;
	
	if(dezD == 1){
		switch (uniD){
			case 0:
				printf("Dez");
				break;
			case 1:
				printf("Onze");
				break;
			case 2:
				printf("Doze");
				break;
			case 3:
				printf("Treze");
				break;
			case 4:
				printf("Catorze");
				break;
			case 5:
				printf("Quinze");
				break;
			case 6:
				printf("Dezesseis");
				break;
			case 7:
				printf("Dezessete");
				break;
			case 8:
				printf("Dezoito");
				break;
			case 9:
				printf("Dezenove");
		}
	}
	else if(dezD==0 && uniD == 1){
		printf("Primeiro");
	}
	else if(dezD  ==  2 && uniD>=0){
		printf("Vinte");
		}
	if (dezD == 2 && uniD>0){
		printf(" e ");
	}
	if(dezD!=1 && uniD>0){
		switch (uniD){
			case1:
				printf("Um");
				break;
			case 2:
				printf("Dois");
				break;
			case 3:
				printf("Três");
				break;
			case 4:
				printf("Quatro");
				break;
			case 5:
				printf("Cinco");
				break;
			case 6:
				printf("Seis");
				break;
			case 7:
				printf("Sete");
				break;
			case 8:
				printf("Oito");
				break;
			case 9:
				printf("Nove");
		}
	}
	if (dezD == 3 && uniD >= 0){
		switch(uniD){
			case 0:
				printf("Trinta");
				break;
			case 1:
				printf("Trinta e Um");
		}
	}
	printf(" de ");
	switch (mes){
		case 1:
			printf("Janeiro.");
			break;
		case 2:
			printf("Fevereiro.");
			break;
		case 3:
			printf("Março.");
			break;
		case 4:
			printf("Abril.");
			break;
		case 5:
			printf("Maio.");
			break;
		case 6:
			printf("Junho.");
			break;
		case 7:
			printf("Julho.");
			break;
		case 8:
			printf("Agosto.");
			break;
		case 9:
			printf("Setembro.");
			break;
		case 10:
			printf("Outubro.");
			break;
		case 11:
			printf("Novembro.");
			break;
		case 12:
			printf("Dezembro.");
			break;
	}
}
