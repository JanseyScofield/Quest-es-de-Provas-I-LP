#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	int senha;
	int m,c,d,u;
	scanf("%d", &senha);
	
	m = senha/1000;
	c = (senha%1000)/100;
	d = (senha%100)/10;
	u =  senha%10;
	
	if(m==c && c==d && d==u){
		printf("A senha é formada por algarismos iguais.");
	}
	else if(u==(d+1) && d==(c+1) && c==(m+1)){
		printf("A senha é formada por uma sequência crescente.");
	}
	else if(m==(c+1) && c==(d+1) && d==(u+1)){
		printf("A senha é formada por uma sequência decrescente");
	}
	else{
		printf("Senha válida.");
	}
}
