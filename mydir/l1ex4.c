#include <stdio.h>

int main(void){

	int fatorial, n, i;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	fatorial = n;

		if(n == 0){
			fatorial = 1;
		}
		else{
			for(i=1; i<n; i++){
				fatorial = fatorial*i;
			}
		}
		
	printf("O fatorial de %d é %d\n", n, fatorial);
	return 0;
	}
