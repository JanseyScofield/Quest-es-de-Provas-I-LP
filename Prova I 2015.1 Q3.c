#include <stdio.h>

main(){
	float nota1, nota2, nota3, nota4;
	float notaFinal;
	scanf("%f %f %f %f",&nota1, &nota2, &nota3, &nota4);
	
	if((nota4<nota3 && nota4<nota2 && nota4<nota1) || (nota4<nota2 && nota4<nota3 && nota4 == nota1) || (nota4<nota1 && nota4<nota2 && nota4==nota3) || (nota4<nota3 && nota4<nota1 && nota4==nota2))
		nota4=0;
	else if((nota3<nota4 && nota3<nota2 && nota3<nota1) || (nota3<nota2 && nota3<nota4 && nota3 == nota1) || (nota3<nota1 && nota3<nota2 && nota4==nota3) || (nota3<nota4 && nota3<nota1 && nota3==nota2))
		nota3=0;
	else if((nota2<nota4 && nota2<nota3 && nota2<nota1) || (nota2<nota3 && nota2<nota4 && nota2 == nota1) || (nota2<nota1 && nota2<nota4 && nota2==nota3) || (nota2<nota3 && nota2<nota1 && nota3==nota4))
		nota2=0;
	else if((nota1<nota4 && nota1<nota3 && nota1<nota2) || (nota1<nota2 && nota1<nota4 && nota1 == nota3) || (nota1<nota3 && nota1<nota2 && nota4==nota1) || (nota1<nota4 && nota1<nota3 && nota1==nota2))
		nota1=0;
	
	
	notaFinal = (nota1+nota2+nota3+nota4)/3;
	printf("%.2f",  notaFinal); 
		
}
