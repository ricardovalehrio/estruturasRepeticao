#include <stdio.h>

#define LINHA 5 // Define o número de linhas
#define COLUNA 5 // Define o número de colunas

int main() {

//Busca condicional em uma matriz
    int matriz [LINHA][COLUNA];
    int target = 9;
    int found = 0; // Flag para indicar se o elemento foi encontrado
    int some = 1;

    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            matriz[i][j] = some;
                some++;
                printf("%d ", matriz[i][j]);
            }
        printf("\n");
    }

// Busca condicional do elemento alvo
    for (int i = 0; i < LINHA; i++) {
        for (int j = 0; j < COLUNA; j++) {
            if (matriz[i][j] == target) {
                printf("Elemento/valor %d encontrado na posição/indices (%d, %d)\n", target, i, j);
                found = 1; // Elemento encontrado
                break; // Sai do loop interno
            }
        }
        if (found) {
            break; // Sai do loop externo se o elemento foi encontrado
        }
    }

    if (!found) {
        printf("Elemento/valor %d não encontrado na matriz.\n", target);
    } 

            

    return 0;

}