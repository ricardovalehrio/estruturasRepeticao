#include <stdio.h>
 
int main() {
    int i = 1;
   
    do { // Entrada (executa o bloco de código pelo menos uma vez)
        printf("%d\n", i); // Saída (verifica a condição após a execução do bloco)
        i++;
    } while (i <= 5); /* Se a condição for verdadeira, repete o bloco de código se for falsa 
    sai do loop mas garante que o bloco foi executado pelo menos uma vez */
    printf("Fim do loop do-while\n");

    // proximo código

    int num;
   
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0);
   
    printf("Número negativo detectado. Saindo...\n");
   
    /*Nesse caso, o loop do-while assegura que o pedido de entrada seja feito pelo menos uma vez, 
    independentemente do valor inicial de num. Após cada entrada, a condição num >= 0 é verificada. 
    Se for verdadeira, o loop continua; se for falsa, o loop termina.*/

    // utilização prática do do-while

    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3);

    /*Nesse exemplo, o menu é exibido pelo menos uma vez, 
    e o loop continua até que o usuário escolha a opção de sair (opção 3).*/

   return 0;
}