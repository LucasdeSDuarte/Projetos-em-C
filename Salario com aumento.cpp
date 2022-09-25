#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario;
printf("informe o seu salario: ");
scanf("%f",&salario);
if (salario < 5000){
	salario = (salario * 0.20);
		printf("%f",salario);
}else{
	salario =(salario * 0,15);
		printf("%f",salario);
}
system("pause");
}
