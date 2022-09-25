#include <stdio.h>
#include <stdlib.h>

int main (){
	int username = 1;
	bool teste = false;
	int senha = 123;
	int tentativas;
	
	printf("Digite seu username:\n ");
	scanf("%i",&username);
	printf("Digite sua senha:\n ");
	scanf("%i",&senha);
	
	while(teste == false){
	tentativas = tentativas +1;
	if (username == 1 && senha == 123){
		printf("Seu login foi aceito! ");
		teste = true;
	}else if (tentativas >= 3){
	printf("Voce excedeu o limite de tentativas");
	teste = true;
	}else{
		printf("Tente novamente\n ");
		printf("Digite seu username:\n ");
		scanf("%i",&username);
		printf("Digite sua senha:\n ");
		scanf("%i",&senha);
		}
}
printf("Voce ja excedeu o limite de tentativas %d \n",tentativas);
return 0;
}
