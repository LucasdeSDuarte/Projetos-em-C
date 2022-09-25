  #include <stdio.h>
#include <stdlib.h>

/* contar de 1 a 50 e de 75 a 199 */

int main(int argc, char *argv[]) {
	
	int i = 0;
	
	while(i < 199){
		i++;
		if(i >50 && i < 75){
			continue;
		}
		printf("%d ", i);
	}
	
	system("pause");
	return 0;
}
