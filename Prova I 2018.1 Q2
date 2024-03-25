/*Ao continuar sua jornada, Biu se depara com seu primeiro oponente: um incrível Rattata. Como Biu é bastante calculista, ele pede ajuda a você para descobrir se a sequência de
ataques que ele pretende utilizar contra o seu oponente irá derrotá-lo, considerando que seu pokémon não morra antes.
No jogo, Biu utilizará apenas três ataques e cada ataque corresponde a um número. Para o Rattata ser derrotado, dos três ataques selecionados por Biu, deve existir:
 - Um número maior que dez;
 - Um número par.
Casos essas duas condições não forem satisfeitas, o Rattata não será derrotado. Outra observação é que se Biu escolher o ataque de número 0, independente se as condições de vitória
forem satisfeitas, o Rattata também não será derrotado.*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int atq1,atq2,atq3;
	printf("Um Rattata selvagem apareceu!Vá, pokémon!\n");
	printf("Digite o número do seu primeiro ataque: ");
	scanf("%d", &atq1);
	printf("Digite o número do seu segundo ataque: ");
	scanf("%d", &atq2);
	printf("Digite o número do seu terceiro ataque: ");
	scanf("%d", &atq3);
	
	if((atq1>10 || atq2>10 || atq3>10) && (atq1!=0 && atq2!=0 && atq3!=0)){
		if(atq1%2==0  || atq2%2==0 || atq3%2==0){
			printf("O Rattata selvagem será abatido!Biu venceria!");
		}
	}
	else{
		printf("O Rattata selvagem estará de pé!Biu perderá.");
	}
}
