#include <stdio.h>

main(){
	int indice, soma, k;
	
	indice = 12;
	soma = 0;
	
	while(k < indice){
		k++;
		soma += k;
	}
	
	printf("\n\n%d", soma);
}
