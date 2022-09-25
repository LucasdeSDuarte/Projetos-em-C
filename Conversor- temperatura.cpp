#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float c, f;

printf("Imforme a temperatura para conversão: ");
scanf("%f", &c);
f = (c * 1.8 + 32);
printf("\A conversão é : %.2f\n",f);

system("pause");
}
