/*Um cadeado possui um sistema de código para ser aberto em vez de uma chave. O cadeado 
contém uma sequência de três rodas. Cada roda possui os 9 dígitos (0..9) em ordem. Se você 
move uma roda para cima, o dígito que ela mostra muda para o próximo dígito (se o dígito 
mostrado for '9', então ela muda para '0'). Se você move uma roda para baixo, ela muda para o 
dígito anterior (se a dígito mostrado for '0', ela muda para '9').
O cadeado abre quando as rodas mostrarem uma determinada sequência numérica. Escreva um
programa que leia a configuração atual do cadeado (número atualmente exibido pelas rodas) e o
número de desbloqueio (a senha armazenada nas rodas) e indique qual o menor número de
movimentos necessários para abrir o cadeado. Por exemplo, se o número atual for 152 e o
segredo for 971, serão precisos: dois movimentos para o primeiro número (1→0→9), dois
movimentos para o segundo número (5→6→7) e um número para o terceiro número (1→2), logo a
saída deverá ser 5.*/

#include <stdio.h>

main(){
	int configAtual, cC, dC, uC;
	int senha,  cS, dS, uS;
	int moviC, moviD, moviU, moviT;
	
	scanf("%d", &configAtual);
	scanf("%d", &senha);
	
	cC = configAtual/100;
	dC = (configAtual%100)/10;
	uC = configAtual%10;
	
	cS = senha/100;
	dS = (senha%100)/10;
	uS = senha%10;
	
	cC = cC==0 && cS>5?10:cC;
	dC = dC==0 && dS>5?10:dC;
	uC = uC==0 && uS>5?10:uC;
	
	cS = cS==0 && cC>5?10:cS;
	dS = dS==0 && dC>5?10:dS;
	uS = uS==0 && uC>5?10:uS;
	
	if((cS==9 && cC==1) || (cS==1 && cC == 9)){
		moviC = 2;
	}
	else if((cS==8 && cC==1) || (cS==1 && cC == 8)){
		moviC = 3;
	}
	else if((cS==7 && cC==1) || (cS==1 && cC == 7)){
		moviC = 4;
	}
	else{
		moviC = cS- cC;
	}
	
	if((dS==9 && dC==1) || (dS==1 && dC == 9)){
		moviD = 2;
	}
	else if((dS==8 && dC==1) || (dS==1 && dC == 8)){
		moviD= 3;
	}
	else if((dS==7 && dC==1) || (dS==1 && dC == 7)){
		moviD = 4;
	}
	else{
		moviD = dS- dC;
	}
	
	if((uS==9 && uC==1) || (uS==1 && uC == 9)){
		moviU = 2;
	}
	else if((uS==8 && uC==1) || (uS==1 && uC == 8)){
		moviU = 3;
	}
	else if((uS==7 && uC==1) || (uS==1 && uC == 7)){
		moviU = 4;
	}
	else{
		moviU = uS- uC;
	}
	
	moviC *= moviC<0?-1:1;
	moviD *= moviD<0?-1:1;
	moviU *= moviU<0?-1:1;
	
	moviT = moviC + moviD + moviU;
	printf("%d", moviT);
}
