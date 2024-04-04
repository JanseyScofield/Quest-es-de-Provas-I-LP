#include <stdio.h>

main(){
	int distPecorrida, restoDiv;
	
	scanf("%d", &distPecorrida);
	restoDiv = (distPecorrida-3)%8;
	
	if(restoDiv == 3){
		printf("Sensor 1");
	}
	else if(restoDiv == 4){
		printf("Sensor 2");
	}
	else if(restoDiv == 5){
		printf("Sensor 3");
	}
}
