#include <stdio.h>
#include <stdlib.h>

int main() {
int idade;

printf("Digite idade: ");
scanf("%d", &idade);

if(idade >= 18){
	printf("Maior de idade.\n\n");
}
else{
	printf("Menor de idade.\n\n");
}
system("pause");
}
