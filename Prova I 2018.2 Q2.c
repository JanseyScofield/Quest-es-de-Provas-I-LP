/* Um algoritmo de dígito verificador da setelândia é baseado na conversão de números para a  base sete como descrito a seguir:
Lê-se um número de 0 a 999 escrito na base 10. Em seguida, converte-se esse número para a base 7.  Soma-se os algarismos do número na base 7, e, por fim, calcula-se o resto da 
divisão desta soma por 7. Este número deve ser inserido à direita do número original (como dígito verificador), e o número gerado deve ser impresso.
Por exemplo: Caso o número lido seja (999)10, o algoritmo deverá calcular a representação na base 7  deste número: (2625)7. Deve-se buscar o resto da divisão, da soma destes 
algarismos (2+6+2=5=15) por 7 (1). O número gerado com DV, será 9991. Apenas um número deve ser impresso como saída do 
algoritmo. Escreva um algoritmo em C, que realize a geração do número com DV de acordo com as regras apresentadas.*/

#include <stdio.h>

main(){
	int num10, alg1, alg2, alg3, alg4, dv, resultado, resto;
	scanf("%d", &num10);
	
	alg4 = num10%7;
	resto = num10/7;
	alg3 = resto%7;
	resto /= 7;
	alg2 = resto%7;
	resto /= 7;
	alg1  = resto%7;
	
	dv = (alg1 + alg2 + alg3 + alg4)%7;
	resultado = (num10*10) + dv;
	printf("%d", resultado);
}
