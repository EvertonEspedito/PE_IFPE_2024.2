#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define T 3

//Desenvolver um algoritmo que obtenha as seguintes informações para 3 colegas da sua turma de Programação:
//nome → char nome[15];
//sobrenome → char sobrenome[30];
//
//Após, realizar as seguintes tarefas:
//
//Copiar o nome do seu colega para uma variável nome_compl;
//Concatenar o sobrenome à variável nome_compl;
//Obter o tamanho da variável nome_compl;
//Imprimir todas as informações de cada um dos seus colegas na tela

struct nameAlunos
{
	char nome[15];
	char sobrenome[30];
	char nome_comp[45];
};

main (){
	
	struct nameAlunos colegas[T];
	
	for(int i = 0;i < T;i++){
		printf("Digite o Primeiro Nome do Colega %d:\n",i+1);
		fflush(stdin);
		gets(colegas[i].nome);
		
		printf("Digite o Sobrenome do Colega %d:\n",i+1);
		fflush(stdin);
		gets(colegas[i].sobrenome);
	}	
	
	for(int i = 0;i < T;i++){
		strcat(colegas[i].nome_comp,colegas[i].nome);
		strcat(colegas[i].nome_comp,colegas[i].sobrenome);
	}
	
	
	
	for(int i = 0;i < T;i++){
		int tamNameComp = strlen(colegas[i].nome_comp);
		printf("- O nome do colega %d, eh :%s ",i+1,colegas[i].nome_comp);
		printf(" - O nome desse Colega tem: %d Letras\n\n",tamNameComp);
	}

return (0);
}
