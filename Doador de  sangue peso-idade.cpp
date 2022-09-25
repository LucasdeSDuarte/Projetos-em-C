#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int idade;
float peso;

printf("Qual sua idade: ");
scanf("%d", &idade);

printf("Qual seu Peso: ");
scanf("%f", &peso);

if(peso>=50 && idade>=18 && idade<=65){
	printf("\nPode doar sangue\n.");
}else{
	printf("\nNAO PODE DOAR SANGUE.\n");
}

system("pause");
}
