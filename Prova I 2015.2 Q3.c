/*Para	 se	 determinar	 o	 número	 de	 lâmpadas	 necessárias	 para	 um	 cômodo	 de	 uma	
residência,	 existem	 normas	 que	 dão	 o	 mínimo	 de	 potencia	 de	 iluminação	 exigida	 por	
metro	 quadrado	 (m2),	 conforme	 a	 classe	 deste	 cômodo.	 A	 tabela	 abaixo	 exibe	 estes	
valores
Classe         Utilização                     Potência	(W)	/	m2
   I           Quarto, Sala	de	TV                       12
  II           Cozinha, Varanda, Sala                    15
  III          Banheiro, Escritório                      20
Suponha	 que	 serão	 usadas	 na	 iluminação	 apenas	 lâmpadas	 de	 60W	 e	 escreva	 um	
programa	em	C,	que	leia	a	classe	de	utilização	do	cômodo	e	suas	dimensões	(largura	e	
comprimento),	 calcule	 e	 imprima	 o	 número	 de	 lâmpadas	 de	 60W	 necessárias	 para	 a	
iluminação	do	cômodo.*/

#include <stdio.h>

main(){
	float larguraC, compriC, areaC, potenciaMin, numLamp;
	int classe;
	scanf("%f %f", &larguraC, &compriC);
	scanf("%d", &classe);
	
	areaC = larguraC*compriC;
	
	switch(classe){
		case 1:
			potenciaMin = areaC * 12;
			break;
		case 2:
			potenciaMin = areaC * 15;
			break;
		case 3:
			potenciaMin = areaC * 20;
	}
	numLamp = potenciaMin/60;
	numLamp = int(numLamp);
	printf("%.2f", numLamp);
}
