#include <stdio.h>

#define LINHAS 5
#define COLUNAS 5

int main() {

   int matriz [LINHAS][COLUNAS];
    int soma = 0;
    // Inicialização da matriz usando loops 'for' aninhados
    for(int i = 0; i < LINHAS; i++) {
        for(int j = 0; j < COLUNAS; j++) {
            soma++;
            matriz[i][j] = soma; // Atribui valores à matriz
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }




    return 0;
}
