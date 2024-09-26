#include <stdio.h>
#include <string.h>

main(){
	char a[100];
	int c, d;
	
	d=0;
	
	printf("Digite algo: ");
	scanf("%[^\n]", a);
	
	for(c=0; c<strlen(a); c++){
		if(a[c] == 'a' || a[c] == 'A'){
			d++;
		}
	}
	
	if(d > 0){
		printf("A quantidade de vezes em que a letra 'a' aparece na string é: %d", d);
	} else {
		printf("A letra a não aparece nenhuma vez na string.");
	}
}
