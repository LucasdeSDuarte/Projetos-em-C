#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float compra,desconto5,desconto10,valor,valor1;
char cupom;
	
printf("Qual o valor da compra em R$: ");
scanf("%f",&compra);
printf("\n");
desconto10 = compra * 10 / 100;
desconto5 = compra * 5 / 100;
valor = compra - desconto10;
valor1 = compra - desconto5;
if (compra >= 2500){
printf("Voce teve desconto o valor ficou R$: %.2f \n", valor);
	}else if(compra <= 2500){
		printf("Voce tem cupom de desconto [s/n]: ");
		scanf("%s", &cupom);
		printf("\n");
	}if (cupom == 's' || cupom == 'S'){
		printf("Voce recebeu desconto o valor ficou R$: %.2f",valor1);
		printf("\n");
	}else if (cupom == 'n' || cupom == 'N'){
	printf("Voce nao tem desconto o valor ficou R$: %.2f",compra);
	printf("\n");
}
printf("OBRIGRADO VOLTE SEMPRE\n");
system("pause");
return 0;
}
