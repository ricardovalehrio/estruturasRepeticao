#include <stdio.h>

//Modificação condicional da matri
int main() {
    int matriz [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    for (int i = 0; i <3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz[i][j] > 5) {
                matriz[i][j] = -matriz[i][j]; // se o elemento for maior 5, tornar-o negativo
            }
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

//Contagem condicional de uma matriz
    int matriz1 [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 3; i++) { //Loop externo para as linhas
        for (int j = 0; j < 3; j++) { //Loop interno para as colunas
            if (matriz1[i][j] % 2 == 0) {
                evenCount++; // Incrementa o contador de pares
            } else {
                oddCount++; // Incrementa o contador de ímpares
            }
        }

        // Exibe os resultados
        printf("Números pares: %d\n", evenCount);
        printf("Números ímpares: %d\n", oddCount);

    }
//Substituição condicional de elementos em uma matriz
    int matriz2 [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz2[i][j] % 3 == 0) {
                matriz2[i][j] = -1; // Substitui elementos multiplos de 3 por -1
            }
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

  

//Busca condicional em uma matriz
    int matriz3 [3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int target = 5;
    int found = 0; // Flag para indicar se o elemento foi encontrado
    // Busca condicional do elemento alvo
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matriz3[i][j] == target) {
                printf("Elemento %d encontrado na posição (%d, %d)\n", target, i, j);
                found = 1; // Elemento encontrado
                break; // Sai do loop interno
            }
        }
        if (found) {
            break; // Sai do loop externo se o elemento foi encontrado
        }
    }

    if (!found) {
        printf("Elemento %d não encontrado na matriz.\n", target);
    } 

    return 0;


}