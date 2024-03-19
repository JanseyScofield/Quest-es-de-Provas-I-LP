/*Escreva	um	programa	em	C,	que	receba	como	entrada	três	inteiros	representando	uma	data	 (dia,	 mês	 e	 ano),	 calcule	 e	 escreva	 como	 saída	 o	 
dia	 seguinte	 (dia,	 mês	 e	 ano).	Lembre-se	que	os	meses	01,	03,	05,	07,	08,	10	e	12	possuem	31	dias,	os	meses	04,	06,	09	e	11	possuem	30	dias	e	o	mês	
02	pode	possuir	28	ou	29	dias	(em	caso	de	ano	bissexto).	Um	 ano	 é	 bissexto	 se	 ele	 é divisível	 por	 4.	 Mas,	 se	 o	 ano	 é	 divisível	 por	 
100,	 e	 não	for divisível	por	400,	ele	não é bissexto.	*/

#include <stdio.h>

main(){
	int dia, mes, ano;
	
	scanf("%d %d %d", &dia, &mes, &ano);
	
	if(dia==30 && (mes==4 || mes==6 || mes==9 ||  mes==11)){
		dia = 1;
		mes ++;
	}
	else if(dia==31 && (mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12)){
		if (dia == 31 && mes == 12 ){
			dia =1;
			mes = 1;
			ano++;
		}
		else{
			dia=1;
			mes++;
		}
	}
	else if(mes==2){
		if(ano%4==0 &&(ano%100!=0 || ano%400==0)){
			if(dia==29){
				dia = 1;
				mes++;
			}
			else{
				dia++;
			}
		}
		else if(dia==28){
			dia = 1;
			mes++;
		}
		else{
			dia++;
		}
	}
	else{
		dia++;
	}
	printf("%d/%d/%d", dia, mes, ano);
}
