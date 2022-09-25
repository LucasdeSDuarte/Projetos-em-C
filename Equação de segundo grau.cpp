#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
	
	int a, b, c;
	float d, n1,n2;
	
	printf("Digite o valor de A: ");
	scanf("%d", & a);
		printf("Digite o valor de B: ");
	scanf("%d", & b);
		printf("Digite o valor de C: ");
	scanf("%d", & c);
		
		
		
		if(a == 0){
			printf("nao e uma equacao de segundo grau\n ");	
		
		} else {
			printf("A equacao e se segundo gral\n");
			
			d = pow(b,2)-(4*a*c);
			
				printf("%.2f", d);
				printf("\n");
				
				if(d < 0){
				printf("Nao existe raizes reais. \n");
				
				}else{
					
				n1 = ((-b )+ sqrt(d))/(2*a);
				n2 = ((-b )- sqrt(d))/(2*a);
				
				printf("R1: %f",n1);
				printf("\n");
				printf("R2: %f",n2);
				printf("\n");
				
		  	}
		}
		
	printf("\n");
	system("pause");
		
	
	
}
