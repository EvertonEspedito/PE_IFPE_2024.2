#include <stdlib.h>
#include <stdio.h>
#define T 3

//Considerando o exercício 1, criar uma variável que é um vetor
//da estrutura DadosAluno. O programa deve calcular a média e
//a idade de 10 alunos. Depois, esses dados devem ser
//exibidos.

struct dadosAluno{
	
	float nota1;
	float nota2;
	int idade;

};
int main (){

struct dadosAluno aluno[T];

for(int i = 0; i < T; i++){
	printf("Digite a nota 1 do Aluno %d:\n",i+1);
	scanf("%f", &aluno[i].nota1);
	printf("Digite a nota 2 do Aluno%d:\n",i+1);
	scanf("%f", &aluno[i].nota2);
	printf("Digite a Idade do Aluno%d:\n",i+1);
	scanf("%d", &aluno[i].idade);	
	
}
	

for(int i = 0; i < T; i++){
	float media = (aluno[i].nota1 + aluno[i].nota2) /2;
	printf("A media do Aluno %d eh: %.2f\n",i+1,media);
	printf("A idade do Aluno eh: %d anos\n\n",aluno[i].idade);
}



return (0);
}
