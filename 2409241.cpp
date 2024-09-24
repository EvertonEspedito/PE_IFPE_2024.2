#include <stdlib.h>
#include <stdio.h>

//Criar uma estrutura chamada DadosAluno, que armazena
//duas notas e a idade de um aluno. Ler as notas e a idade do
//aluno e armazenar na na variável criada na struct; exibir na
//tela a média das notas e a idade do aluno.

struct dadosAluno{
	
	float nota1;
	float nota2;
	int idade;

};
int main (){

struct dadosAluno aluno;

printf("Digite a nota 1 do Aluno:\n");
scanf("%f", &aluno.nota1);
printf("Digite a nota 2 do Aluno:\n");
scanf("%f", &aluno.nota2);

float media = (aluno.nota1 + aluno.nota2) /2;

printf("Digite a Idade do Aluno:\n");
scanf("%d", &aluno.idade);	

printf("A media do Aluno eh: %.2f\n",media);

printf("A idade do Aluno eh: %d anos\n",aluno.idade);

return (0);
}
