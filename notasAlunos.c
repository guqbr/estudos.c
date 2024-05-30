#include <stdio.h>

struct Aluno {
    int matricula;
    char nome [20];
    float nota1;
    float nota2;
    float nota3;
    float media;
};

void preencherAlunos(struct Aluno aluno[5]){
 for (int i = 0; i < 5; i++){
        printf("Digite o nome do aluno %d:", i+1);
        scanf("%s", aluno[i].nome);
        printf("Digite o numero da matricula do aluno %d:", i+1);
        scanf("%d", &aluno[i].matricula);
        printf("Digite a nota da primeira prova do aluno %d:", i+1);
        scanf("%f", &aluno[i].nota1);
        printf("Digite a nota da segunda prova do aluno %d:", i+1);
        scanf("%f", &aluno[i].nota2);
        printf("Digite a nota da terceira prova do aluno %d:", i+1);
        scanf("%f", &aluno[i].nota3);
        printf("---------------------------------\n");
        printf("\n");

        aluno[i].media = (aluno[i].nota1 + aluno[i].nota2 + aluno[i].nota3) / 3;
    };
};

int maiorNota1(struct Aluno aluno[5]){
    int maior = 0;
    for(int i = 0; i < 5; i++){
        if(aluno[i].nota1 > aluno[maior].nota1){
            maior = i;
        } 
    }
    return maior;
};

int maiorMedia(struct Aluno aluno[5]){
    int maior = 0;
    for(int i = 0; i < 5; i++){
        if(aluno[i].media > aluno[maior].media){
            maior = i;
        }
    }
    return maior;
};

int menorMedia(struct Aluno aluno[5]){
    int menor = 0;
    for(int i = 0; i < 5; i++){
        if(aluno[i].media < aluno[menor].media){
            menor = i;
        }
    }
    return menor;
};

int main(){
    struct Aluno aluno[5];

    preencherAlunos(aluno);

    int notaMaior1 = maiorNota1(aluno);
    int mediaMaior = maiorMedia(aluno);
    int mediaMenor = menorMedia(aluno);

    for(int i = 0; i < 5; i++){
        printf("Nome: %s\n", aluno[i].nome);
        printf("Matricula: %d\n", aluno[i].matricula);
        printf("Nota 1: %.2f\n", aluno[i].nota1);
        printf("Nota 2: %.2f\n", aluno[i].nota2);
        printf("Nota 3: %.2f\n", aluno[i].nota3);
        printf("Media: %.2f\n", aluno[i].media);
        if(aluno[i].media >= 6){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
        printf("---------------------------------\n");
        printf("\n");
    };

        printf("Aluno com a maior nota da primeira prova: %s\n", aluno[notaMaior1].nome);
        printf("Nota: %.2f\n", aluno[notaMaior1].nota1);
        printf("Aluno com a maior media: %s\n", aluno[mediaMaior].nome);
        printf("Media: %.2f\n", aluno[mediaMaior].media);
        printf("Aluno com a menor media: %s\n", aluno[mediaMenor].nome);
        printf("Media: %.2f\n", aluno[mediaMenor].media);

    return 0;
};