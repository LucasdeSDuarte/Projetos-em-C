#include <stdio.h>
#include <stdlib.h>

int main(){


float media,numeros,cont = 0,soma;


while (cont < 10){
	printf("digite um numero: \n");
	scanf("%f",&numeros);
	cont++;
}
media = (cont * numeros)/10;
printf("A media foi de %2.f\n", media);
system("pause");
}
