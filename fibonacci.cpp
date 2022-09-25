#include <stdio.h>
#include <stdlib.h>

int main(){
	int termos;
	int t1 = 0, t2 = 1, t3, cont = 0;
	
	printf("defina quantos termos voce quer: ");
	scanf("%d",&termos);
	while (cont <= termos){
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
		cont++;
		printf(" %d\n", t3);
	}
	
}
