#include <stdio.h>

main (){
	int a, b, c, d, fib;
	
	b=0;
	c=1;
	d=0;
	
	printf("Digite um valor inteiro: ");
	scanf("%d", &a);
	
	while(fib < a ){
		fib = b + c;
		b = c;
		c = fib;
		printf("%d\n", fib);
	}
	
	if(fib == a){
		printf("O valor pertence a sequência de Fibonacci.");
	} else {
		printf("O valor nao pertence a sequência de Fibonacci.");
	}
}
