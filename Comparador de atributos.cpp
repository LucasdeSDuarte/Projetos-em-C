#include <stdio.h>
#include <stdlib.h>
// ver qual é mais pesadoentre ouro  prata e bronze

int main(){
	float ouro, prata, bronze;
	
	printf("DIGITE O PESO DO OURO: ");
	scanf("%f", &ouro);
	
	printf("DIGITE O PESO DA PRATA: ");
	scanf("%f", &prata);
	
	printf("DIGITE O PESO DO BRONZE: ");
	scanf("%f", &bronze);
	
	if(ouro > prata && ouro > bronze){
		printf("OURO MAIS PESADO.");
		
	}else if (prata > ouro && prata > bronze){
		printf("PRATA MAIS PESADO.");
		
	}else if(ouro == prata){
		printf("OUROE E PRATA TEM O MESMO PESO.");
}else if(ouro == bronze){
		printf("OUROE E BRONZE TEM O MESMO PESO.");
}	
	else if(prata == bronze){
		printf("PRATA E BRONZE TEM O MESMO PESO.");
}
	else{
		printf("BRONZE MAIS PESADO.");
	}
	printf("\n\n");
	system("pause");
	
}
