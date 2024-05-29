#include <stdio.h>

struct Aluno {
    char nome [20];
    int matricula;
    char curso [20];
};

void preencherAlunos(struct Aluno aluno[5]){
 for (int i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d:", i+1);
        scanf("%s", &aluno[i].nome);
        printf("Digite o numero da matricula do aluno %d:", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite o curso do aluno %d:", i+1);
        scanf("%s", &aluno[i].curso);
        printf("---------------------------------\n");
        printf("\n");
    };
}; 

int main() {
    struct Aluno aluno[5];

    preencherAlunos(aluno);

    for(int i = 0; i < 5; i++){
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Curso: %s\n", aluno[i].curso);
        printf("---------------------------------\n");
        printf("\n");
    };

    return 0;
};