#include <stdio.h>

int main() {
    
    int matriz[3] [3]; // Declaração de uma matriz 3x3
    matriz[0][0] = 1; // Atribuição de valores à matriz
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    // Acessando e imprimindo os valores da matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("o elemento da linha 0 coluna 0 é : %d\n", matriz[0][0]); // Acessa o elemento na linha 0, coluna 0
    printf("o elemento da linha 1 coluna 1 é : %d\n", matriz[1][1]); // Acessa o elemento na linha 1, coluna 1
    printf("o elemento da linha 2 coluna 2 é : %d\n", matriz[2][2]); // Acessa o elemento na linha 2, coluna 2

    // int matriz [3][3]= 
    // {1, 2, 3},
    // {4, 5, 6},
    // {7, 8, 9};


    return 0;
}