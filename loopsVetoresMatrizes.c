#include <stdio.h>

int main() {

int vetor[5];//Declaração de um vetor de 5 inteiros
// Inicialização do vetor usando o loop 'for'
for(int i = 0; i < 5; i++) {
    vetor[i] = i * 2; // Atribui valores ao vetor
}

// Impressão dos valores do vetor usando o loop 'for'
for(int i = 0; i < 5; i++) {
    printf("vetor/indice[%d] = %d\n", i, vetor[i]);
}


int matriz[3][3]; // Declaração de uma matriz 3x3
// Inicialização da matriz usando loops 'for' aninhados
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
        matriz[i][j] = i + j; // Atribui valores à matriz
        printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
}

int vetor2[5] = {1, 2, 3, 4, 5}; // Declaração e inicialização de um vetor
int soma = 0;

for (int i = 0; i < 5; i++) {
    soma += vetor2[i]; // Soma os elementos do vetor
}
printf("Soma dos elementos do vetor2 é: %d\n", soma);

int matriz1[2][2] = { {1, 2}, {3, 4} }; // Declaração e inicialização de uma matriz 2x2
int matriz2[2][2] = { {5, 6}, {7, 8} };
int matrizSoma[2][2]; // Matriz para armazenar o resultado da soma

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
        matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j]; // Soma as matrizes
        printf("matrizSoma[%d][%d] = %d\n", i, j, matrizSoma[i][j]);
    }  
}






    return 0;
}