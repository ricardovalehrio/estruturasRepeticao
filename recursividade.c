// recursividade é uma função que executa a si própria
#include <stdio.h>

// *** CHAMADA EXTERNA ***

// Função recursiva para imprimir números de n até 1 
void recursiveLoop(int numero) {
    if (numero > 0) {
        printf("%d ", numero); // Imprime o valor atual de numero
        recursiveLoop(numero - 1); // Chama a função novamente com numero-1, é interessante trabalhar com DECREMENTO em recursividade
    }
}

int main() {
    int quantidade = 5; // Número inicial para o loop recursivo
    printf("Contagem regressiva de %d até 1:\n", quantidade);
    recursiveLoop(quantidade); // Inicia o loop recursivo
    printf("\n");
    return 0;
}