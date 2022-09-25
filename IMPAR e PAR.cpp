#include <stdio.h>
#include <stdlib.h>

int main() {
int numero, resultado; 

printf("informe um numero: ");
scanf("%d", &numero);

if(numero % 2 ==0){
	printf("\npar\n");
}else{
	printf("\nimpar\n");
}


//printf("\nA se o numero sobrar 0 e par se 1 e impar : %d\n");

system("pause");
}
