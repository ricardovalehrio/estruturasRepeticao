//arrays são vetores e matrizes são estruturas de dados que armazenam dados do mesmo tipo e são acessados por índices
//funciona com estruturas de repetição e com ponteiros
// Arrays(vetores) coleção de elementos do mesmo tipo, acessados por um índice único
// Matrizes coleção de elementos do mesmo tipo, acessados por dois ou mais índices, generalização dos vetores-arrays
#include <stdio.h>

int main() {
// Declaração e inicialização de um vetor (array) de inteiros com 5 elementos
int numeros[5] = {10, 20, 30, 40, 50};

printf("O elemento de indice 0 do vetor é : %d\n", numeros[0]); // Acessa o primeiro elemento do vetor
printf("O elemento de indice 1 do vetor é : %d\n", numeros[1]); // Acessa o segundo elemento do vetor
printf("O elemento de indice 2 do vetor é : %d\n", numeros[2]); // Acessa o terceiro elemento do vetor
printf("O elemento de indice 3 do vetor é : %d\n", numeros[3]); // Acessa o quarto elemento do vetor
printf("O elemento de indice 4 do vetor é : %d\n", numeros[4]); // Acessa o quinto elemento do vetor

 float notas[3] = {85.5, 90.0, 78.3};  // Array de notas de 3 alunos
 
    printf("Nota do primeiro aluno: %.1f\n", notas[0]);
    printf("Nota do segundo aluno: %.1f\n", notas[1]);
    printf("Nota do terceiro aluno: %.1f\n", notas[2]);
 
char letras[4] = {'A', 'B', 'C', 'D'}; // Array de caracteres

printf("Primeira letra indice 0 é : %c\n", letras[0]);
printf("Segunda letra indice 1 é : %c\n", letras[1]);
printf("Terceira letra indice 2 é : %c\n", letras[2]);
printf("Quarta letra indice 3 é : %c\n", letras[3]);


char *nomes[] = {"Alice", "Bob", "Carol"}; // Matriz de strings (array de strings)

for(int i = 0; i < 3; i++) {
    printf("Nome do aluno %d: %s\n", i + 1, nomes[i]);
}


    return 0;
}
