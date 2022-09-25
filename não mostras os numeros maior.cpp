#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	while (i < 199){
		i++;
		if ( i > 50 && i < 75){
			continue;
		}
	printf("%d ", i);
		
	}
printf("\nFIM\n");
system("pause");
}

