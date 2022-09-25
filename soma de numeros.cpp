#include<stdio.h>
#include<stdlib.h>

int main(){
	int soma = 0;
 	for(int i = 0; i <= 100; i++){
 		for(int j = 0; j <= 100; j++){
		soma = i + j;
		 printf(" %d",soma);
		 printf("\n");
	  }
	}
 }
