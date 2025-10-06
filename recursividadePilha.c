#include <stdio.h>

// *** CHAMADA EXTERNA ***

// Função recursiva para imprimir números de 1 até n => CRESCENTE
void recursiveLoop(int numero) {
    if (numero > 0) {
        recursiveLoop(numero - 1); 
        printf("%d ", numero); // basta so inverter a ordem do printf e da chamada
    }
}

int main() {
    int quantidade = 5; // Número inicial para o loop recursivo
    printf("Contagem crescente de 1 até %d:\n", quantidade);
    recursiveLoop(quantidade); // Inicia o loop recursivo
    printf("\n");
    return 0;
}