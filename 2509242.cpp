#include <stdlib.h>
#include <stdio.h>

int total(int n1, int n2){
	return(n1+n2);
}

void divi(int n1){
	float z = n1/2;
	printf("O resultado da Divisao eh %.2f",z);
}

main (){
	int n1,n2;
	printf("Digite um numero para Fazer uma soma:\n");
	scanf("%d",&n1);
	printf("Digite um numero para Fazer uma soma:\n");
	scanf("%d",&n2);
	
	
	int resut = total(n1,n2);
	printf("%d\n",resut);
	
	divi(resut);
return (0);
}
