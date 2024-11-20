#include <stdio.h>
#define MAX 10  // Tamanho máximo da pilha

typedef struct {
    char livros[MAX][50];  // Armazena o título dos livros
    int topo;
} Pilha;

// Função para inicializar a pilha
void inicializar(Pilha *p) {
    p->topo = -1;
}

// Função para verificar se a pilha está cheia
int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

// Função para verificar se a pilha está vazia
int estaVazia(Pilha *p) {
    return p->topo == -1;
}

// Função para empilhar (push)
void push(Pilha *p, char livro[]) {
    if (estaCheia(p)) {
        printf("O carrinho está cheio!\n");
        return;
    }
    p->topo++;
    snprintf(p->livros[p->topo], 50, "%s", livro);
}

// Função para desempilhar (pop)
void pop(Pilha *p) {
    if (estaVazia(p)) {
        printf("O carrinho esta vazio!\n");
        return;
    }
    printf("Livro retirado: %s\n", p->livros[p->topo]);
    p->topo--;
}

// Exemplo de uso
int main() {
    Pilha carrinho;
    inicializar(&carrinho);

    // Simula empilhar livros
    push(&carrinho, "Aprendendo C");
    push(&carrinho, "Estruturas de Dados");
    push(&carrinho, "Algoritmos e Logica");

    // Simula retirar livros do carrinho para colocar na prateleira
    pop(&carrinho);  // Último livro inserido
    pop(&carrinho);  // Próximo livro
    pop(&carrinho); //Próximo...
    //pop(&carrinho); //Carrinho Vazio..

    return 0;
}
