#include <stdio.h>
 
int main() {
    int i = 0; // variável de incremento
    while (i <= 10) {
        if(i % 2 == 0) { // verifica se o número é par
            printf("O número %d é par! \n", i); // imprime o valor atual de i - Saida
        }
        i++; // incrementa 1 em i até ele chegar a 10

    }

    int f = 0; // variável de incremento
    while (f <= 10) {
        if(f % 2 != 0) { // verifica se o número é ímpar
            printf("O número %d é ímpar! \n", f); // imprime o valor atual de f - Saida
        }
        f++; // incrementa 1 em f até ele chegar a 10

    }

    int numero;
    
    do {
        
        printf("Digite um número par para sair do programa: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("O número %d é par, saindo do programa.\n", numero);
        } else {
            printf("O número %d é ímpar, tente novamente.\n", numero);
        }
    } while (numero % 2 !=0); // enquanto o número for ímpar, o loop continua

    printf("Programa encerrado.\n");

    int tabuada, n;

    printf("Digite um número para calcularmos sua tabuada: ");
    scanf("%d", &tabuada);

    for (n = 0; n <= 10; n++) 
    {
        printf(" %d x %d = %d\n", n, tabuada, n * tabuada);
    }




    return 0;
}
