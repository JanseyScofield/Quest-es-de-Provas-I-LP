/*Em um país muito distante, as pessoas são viciadas em um jogo de apostas bastante simples. O jogo é baseado em números e é chamado jogo do bicho. O nome do jogo deriva do fato que os números são divididos em 25 grupos, dependendo do valor dos dois últimos dígitos (dezenas e unidades), e cada grupo recebe o nome de um animal. Cada grupo é associado a um animal da seguinte forma: o primeiro grupo (burro) consiste nos números 01, 02, 03 e 04; o segundo grupo (águia) é composto dos números 05, 06, 07 e 08; e assim em diante, até o ultimo grupo contendo os números 97, 98, 99 e 00.
As regras do jogo são simples. No momento da aposta, o jogador decide o valor da aposta V e um número N (0 <= N <= 99999). Todos os dias, na praça principal da cidade, um número M é sorteado (0 <= M <= 99999). O prêmio de cada apostador é calculado da seguinte forma:
•	se M e N têm os mesmos quatro últimos dígitos (milhar, centena, dezena e unidade), o apostador recebe V × 3000 (por exemplo, N = 14302 e M = 34302);
•	se M e N têm os mesmos três últimos dígitos (centena, dezena e unidade), o apostador recebe V × 500 (por exemplo, N = 33444 e M = 22444);
•	se M e N têm os mesmos dois últimos dígitos (dezena e unidades), o apostador recebe V × 50 (por exemplo, N = 112 e M = 142212);
•	se M e N têm os dois últimos dígitos no mesmo grupo, correspondendo ao mesmo animal, o apostador recebe V × 16 (por exemplo, N = 82197 and M = 337600);
•	se nenhum dos casos acima ocorrer, o apostador não recebe nada.
Obviamente, o prêmio dado a cada apostador é o máximo possível de acordo com as regras acima. No entanto, não é possível acumular prêmios, de forma que apenas um dos critérios acima deve ser aplicado no cálculo do prêmio. Escreva um programa em C, que leia o valor apostado, o número escolhido pelo apostador, e o número sorteado, calcule e imprima qual o prêmio que o apostador deve receber.
*/

#include <stdio.h>

main(){
int numEsc, numSor;
float valorApos, premio;

scanf("%d", &numEsc);
scanf("%d", &numSor);
scanf("%f", &valorApos);

if((numEsc%10000) == (numSor%10000)){
	premio = valorApos*3000;}
else if ((numEsc%1000/100) == (numSor%1000/100)){
	premio = valorApos*500;}
else if ((numEsc%100/10) == (numSor%100/10)){
	premio = valorApos*50;}
else if ((((numEsc-1)%100)/4) == (((numSor-1)%100)/4)){
	premio = valorApos*16;}
else
	premio = 0;
	
printf("R$ %.2f.", premio);
}
