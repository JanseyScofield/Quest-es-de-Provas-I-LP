/*Escreva um algoritmo em linguagem C que leia o horário de entrada (hora, minuto) e ohorário de saída (hora, minuto) de uma aula e escreva o tempo de duração desta aula, no
formato hora:minuto.*/

#include <stdio.h>

main(){
	int horaInicial, minuInicial;
	int horaFinal,  minuFinal, duracH, duracM;
	
	scanf("%d  %d", &horaInicial,&minuInicial);
	scanf("%d %d", &horaFinal, &minuFinal);
	
	duracH = horaFinal - horaInicial;
	duracM = minuFinal - minuInicial;
	
	if(duracM<0){
		duracH--;
		duracM+=60;
	}
	printf("%d:%d", duracH, duracM);
}
