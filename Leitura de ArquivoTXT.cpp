#include <stdlib.h>
#include <stdio.h>

main (){
	
	FILE*fs = fopen("info.txt","r");
	char c;
	
	
	if(fs == NULL){
		printf("Erro ao abrir Arquivo!\n");
		exit(1);
	}
	
	while((c=fgetc(fs))!= EOF)
		putchar(c);
	
	fclose(fs);
	fs = NULL;
	
	remove("info.txt");	

return (0);
}
