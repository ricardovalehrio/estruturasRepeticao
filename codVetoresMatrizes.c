#include <stdio.h>

int main() {
    int index;
    char *nomesAlunos [3][3] = { // matriz de strings feita a mão normalmente é puxada de um banco de dados
        {"Aluno 0", "Pt: 30", "Mat: 90"},
        {"Aluno 1", "Pt: 60", "Mat: 60"},
        {"Aluno 2", "Pt: 90", "Mat: 30"}
    };

    printf("Digite o numero do aluno ao qual gostaria de ver a notas... \n");
    printf("Digite 0 para o Aluno 0 \n");
    printf("Digite 1 para o Aluno 1 \n");
    printf("Digite 2 para o Aluno 2 \n");

    scanf("%d", &index);

    printf("As notas do %s são: %s e %s \n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
    // Temos que alternar entre linha e coluna onde a coluna é fixa e a linha é dinamica

    return 0;
}