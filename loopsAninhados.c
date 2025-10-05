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

// vejamos outros tipos de loops:

// while


int t = 1;
    while (t <= 2) {
    int h = 1;
    while (h <= 10) {
        printf("%d x %d = %d \n", t, h, t * h);
        h++;
    }
    printf("\n");
    t++;
}


// do while


int n = 1;
do {
    int m = 1;
    do {
        printf("%d x %d = %d \n", n, m, n * m);
        m++;
    } while (m <= 10);
    printf("\n");
    n++;
} while (n <= 2);

// observe novamente a facilidade com o for


int segundos; // contagem regressiva
printf("Contagem regressiva para o Ano Novo:\n");
   
for (segundos = 10; segundos >= 0; segundos--) {
    printf("%d\n", segundos);
    // Loop aninhado para simular um atraso
    for (int i = 0; i < 100000000; i++) {
        // Apenas para simular um atraso
    }



}printf("Feliz Ano Novo!\n");
    
for (int d = 1; d <= 5; d++) {
    for (int e = 1; e <= 5; e++) {
        if ((d + e) % 2 == 0) {
            printf("(%d, %d)\n", d, e);
        }
    }
    printf("\n");
}

return 0;
}