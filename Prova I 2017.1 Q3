/* Arquimedes acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo. Sem entender a situação, Arquimedes pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando P1 x C1 = P2 x C2, onde P1 e P2 são os pesos da criança no lado esquerdo e direito, respectivamente, e C1 e C2 são os comprimentos da gangorra do lado esquerdo e direito, respectivamente. Com a equação, Joãozinho já consegue dizer se a gangorra está equilibrada ou não, mas, além disso, ele quer saber para qual lado a gangorra descerá caso esteja desequilibrada. Escreva um programa em C, que leia os pesos das crianças e os comprimentos dos lados da gangorra, calcule e diga se a gangorra ficará equilibrada, penderá pro lado 1 ou pro lado 2.*/

#include <stdio.h>

main(){
	float P1, P2, C1, C2;
	float ladoEsq, ladoDir;
	scanf("%f %f", &P1, &C1);
	scanf("%f %f", &P2, &C2);
	
	ladoEsq = P1 * C1;
	ladoDir = P2 * C2;
	
	if (ladoEsq < ladoDir)
		printf("Ira descer pro lado direito.");
	else if (ladoEsq  > ladoDir)
		printf("Ira descer pro lado esquerdo.");
	else
		printf("A gangorra estara equilibrada.");
}
