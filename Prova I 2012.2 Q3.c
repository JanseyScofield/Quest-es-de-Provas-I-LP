/*Escreva um algoritmo em linguagem C que calcule e imprima a média obtida pelo alunopara aprovação direta (se superior a 7.0) ou o valor mínimo que o aluno (não aprovadopor média) 
precisa obter numa prova final para ser aprovado. Considere que são realizadas três provas durante o semestre e que para aprovação em final a média obtidade acordo com a equação
abaixo precisa ser igual ou superior a 5.0. 
MédiaFinal= ((média aritmética dastrês avaliações parciais)x 2+(notada provafinal) x1)/3*/

#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL,"");
	
	float nota1, nota2,  nota3, media,notaM;
	
	scanf("%f",&nota1);
	scanf("%f",&nota2);
	scanf("%f",&nota3);
	
	media = (nota1+nota2+nota3)/3;
	if(media<7){
		notaM = (5*3) - (media*2);
		printf("Você foi pra prova final.A nota mínima que tu precisa tirar é %.2f.", notaM);
	}
	else{
		printf("Você foi aprovado(a) com %.2f", media);
	}
}
