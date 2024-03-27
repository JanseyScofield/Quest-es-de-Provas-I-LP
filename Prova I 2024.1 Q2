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
