/*Escreva um	programa em C que calcule o desconto previdenciário de um funcionário.	Dado um salário,o programa deve	 imprimir o valor do desconto proporcional ao	mesmo.	
O cálculo segue	a regra:o desconto é de	11% do	valor do salário.Entretanto, o	valor máximo de desconto é 570,88.	*/

#include <stdio.h>

main(){
	float sal, descP;
	scanf("%f",&sal);
	
	descP =  sal*11/100;
	
	descP = descP>570.88?570.88:descP;
	printf("R$ %.2f.", descP);
}
