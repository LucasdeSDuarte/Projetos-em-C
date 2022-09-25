#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	float media,n1,n2,pim,recu,notafinal;
	
	printf("Nota da n1: ");
	scanf("%f",&n1);
	printf("\n");
	printf("Nota da n2: "); 
	scanf("%f",&n2);
	printf("\n");
	printf("Nota do pim: ");
	scanf("%f",&pim);
	printf("\n");
	
	media = (n1 * 40 / 100) + (n2 * 40 / 100) + (pim * 20 / 100);
	
	printf("A sua media foi : %.2f \n",media);
	
	if (media >= 5){
		printf("Voce foi aprovado!\n");
	}else if ( media <= 2.99){
		printf("Voce Foi Reprovado!\n");
	}else if ( media >= 3 && media <= 4.99){
		printf("Voce esta de recuperacao! \n");
		printf("\n");
			printf("Qual foi a sua nota na recuperacao: ");
			scanf("%f",&recu);
			notafinal = media + recu;
			printf("A nota da recuperacao mais a nota da media foi de : %.2f \n",notafinal);
				}if (notafinal >= 10){
					printf("Voce foi Aprovado na recuperacao!\n");
				}else if (notafinal < 10 && media < 5){
					printf("Voce foi Reprovado na recuperacao!\n");
					printf("\n");
}
system("pause");
}
