# include <stdio.h>

int main() {

for ( int i = 1; i <= 10; i++) { // loop externo
    for (int j = 1; j <= 10; j++) { // loop interno
        printf("%d x %d = %d \n", i, j, i * j); // imprime a tabuada de i
    }
    printf("\n"); // imprime uma nova linha após cada linha da tabela
}

/* Utilize for para loops aninhados é uma prática comum em programação, especialmente quando se 
trabalha com matrizes ou tabelas, lembrando que o loop externo controla as linhas e o loop interno controla as 
colunas, permitindo assim a geração de uma tabela completa, use até no maximo n^3 ou seja 'i', 'j' e 'k' para 
loops triplos, mas evite mais do que isso, pois pode tornar o código difícil de entender e manter.*/






    return 0;
}