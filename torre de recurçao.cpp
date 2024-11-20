#include <stdio.h>

// Função recursiva para resolver a Torre de Hanói
void torreHanoi(int n, char origem, char destino, char auxiliar) {
    // Caso base: mover um disco
    if (n == 1) {
        printf("Mover disco 1 de %c para %c\n", origem, destino);
        return;
    }

    // Passo 1: Mover (n-1) discos da estaca de origem para a estaca auxiliar
    torreHanoi(n - 1, origem, auxiliar, destino);

    // Passo 2: Mover o disco restante para a estaca de destino
    printf("Mover disco %d de %c para %c\n", n, origem, destino);

    // Passo 3: Mover (n-1) discos da estaca auxiliar para a estaca de destino
    torreHanoi(n - 1, auxiliar, destino, origem);
}

int main() {
    int numDiscos;

    // Solicita ao usuário o número de discos
    printf("Digite o numero de discos: ");
    scanf("%d", &numDiscos);

    // Chama a função recursiva para resolver o problema
    printf("\nSequencia de movimentos:\n");
    torreHanoi(numDiscos, 'A', 'C', 'B');

    return 0;
}
