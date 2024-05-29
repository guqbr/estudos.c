#include <stdio.h>

struct Dados {
    char nome [20];
    int idade;
    char endereco [50];
};

int main(){

    struct Dados dados;

    printf("Digite o nome: ");
    scanf("%s", &dados.nome);

    printf("Digite a idade:");
    scanf("%d", &dados.idade);

    printf("Digite o endereco:");
    scanf("%s", &dados.endereco);

    printf("Nome: %s \nidade: %d \nendereco: %s \n", dados.nome, dados.idade, dados.endereco);

}